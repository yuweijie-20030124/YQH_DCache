#ifndef YQH_SIM_CHI_TYPES_H
#define YQH_SIM_CHI_TYPES_H

#include <cstdint>

#include "sim_types.h"

namespace yqh {
namespace sim {
namespace chi {

// -----------------------------------------------------------------------------
// Compact-CHI scalar field types
// -----------------------------------------------------------------------------
// C++ has no native uint2/uint3/uint4/uint5 type.  These aliases preserve the
// protocol meaning at the API level; the corresponding exact widths live in
// sim_config.h and are checked when values cross the DUT boundary.
using Size = std::uint8_t;             // kChiSizeBits
using TagAlias = std::uint8_t;         // kTagAliasBits
using Order = std::uint8_t;             // two bits
using MemAttr = std::uint8_t;           // four bits
using Way = std::uint8_t;               // kWayBits
using Resp = std::uint8_t;              // kChiRespBits
using CBusy = std::uint8_t;             // kChiCBusyBits
using DataSource = std::uint8_t;        // kChiDataSourceBits
using DataId = std::uint8_t;            // kChiDataIdBits
using SnoopAddress = Address;           // encoded PA[47:3]

// -----------------------------------------------------------------------------
// Compact-CHI protocol constants
// -----------------------------------------------------------------------------
// The numeric values mirror CompactChiOpcodes.scala in the Compact-CHI
// dependency used by the current DCache RTL.
enum class EvtOpcode : std::uint8_t {
    Evict = 0x00,
    WriteBackFull = 0x01,
};

enum class ReqOpcode : std::uint8_t {
    StashShared = 0x00,
    StashUnique = 0x01,
    ReadNoSnp = 0x02,
    ReadOnce = 0x03,
    ReadShared = 0x04,
    WriteNoSnpPtl = 0x08,
    WriteNoSnpFull = 0x09,
    WriteUniquePtl = 0x0a,
    WriteUniqueFull = 0x0b,
    CleanShared = 0x0c,
    CleanInvalid = 0x0d,
    MakeInvalid = 0x0e,
    ReadUnique = 0x10,
    MakeUnique = 0x12,
};

enum class SnpOpcode : std::uint8_t {
    SnpMakeInvalid = 0x00,
    SnpToInvalid = 0x01,
    SnpToShared = 0x02,
    SnpToClean = 0x03,
};

// TXRSP/TXDAT are emitted by the DCache requester and use the DBID-sized
// txnID field from the Compact-CHI Bundle.
enum class UpRspOpcode : std::uint8_t {
    CompAck = 0x00,
    SnpResp = 0x01,
};

enum class DownRspOpcode : std::uint8_t {
    CompStash = 0x00,
    Comp = 0x01,
    DbidResp = 0x02,
    CompDbidResp = 0x03,
    CompCmo = 0x04,
};

enum class UpDatOpcode : std::uint8_t {
    NonCopyBackWrData = 0x00,
    CopyBackWrData = 0x02,
    SnpRespData = 0x03,
};

enum class DownDatOpcode : std::uint8_t {
    CompData = 0x00,
};

enum class RespErr : std::uint8_t {
    NoError = 0x00,
    Derr = 0x02,
    Nderr = 0x03,
};

// Resp encodings used by the current project-level Compact-CHI contract.
// The *_Pd values carry the project-defined dirty-data responsibility marker.
enum class RespState : std::uint8_t {
    Invalid = 0x00,
    SharedClean = 0x01,
    UniqueClean = 0x02,
    InvalidPd = 0x04,
    SharedCleanPd = 0x05,
    UniqueCleanPd = 0x06,
};

// -----------------------------------------------------------------------------
// Seven Compact-CHI flit payloads
// -----------------------------------------------------------------------------
// These structs represent a payload that is ready to be sampled or driven.
// valid/ready and transaction lifetime are deliberately kept outside the
// payload types.

struct TxReq {
    TxnId txnId{};
    NodeId srcId{};
    NodeId tgtId{};
    ReqOpcode opcode{};
    Size size{};
    Address addr{};
    TagAlias tagAlias{};
    bool ns{};
    Order order{};
    MemAttr memAttr{};
    bool excl{};
    bool expCompData{};
    bool expCompStash{};
    bool wayValid{};
    Way way{};
    bool traceTag{};
};

struct TxEvt {
    TxnId txnId{};
    NodeId srcId{};
    NodeId tgtId{};
    EvtOpcode opcode{};
    Address addr{};
    bool ns{};
    bool memAttr{};
    bool wayValid{};
    Way way{};
    bool traceTag{};
};

struct TxRsp {
    // The wire field is named txnID, but for an upstream response it carries
    // the DBID returned by L2.
    DbId txnId{};
    NodeId srcId{};
    NodeId tgtId{};
    UpRspOpcode opcode{};
    RespErr respErr = RespErr::NoError;
    Resp resp{};
    bool traceTag{};
};

struct TxDat {
    // The wire field is named txnID, but for an upstream data response it
    // carries the DBID associated with the writeback or snoop response.
    DbId txnId{};
    NodeId srcId{};
    NodeId tgtId{};
    UpDatOpcode opcode{};
    RespErr respErr = RespErr::NoError;
    Resp resp{};
    DataId dataId{};
    ChiDataBeat data{};
    ChiByteEnable byteEnable{};
    bool traceTag{};
};

struct RxRsp {
    TxnId txnId{};
    NodeId srcId{};
    NodeId tgtId{};
    DownRspOpcode opcode{};
    DbId dbId{};
    RespErr respErr = RespErr::NoError;
    Resp resp{};
    CBusy cBusy{};
    bool traceTag{};
};

struct RxDat {
    TxnId txnId{};
    NodeId srcId{};
    NodeId tgtId{};
    DownDatOpcode opcode{};
    DbId dbId{};
    RespErr respErr = RespErr::NoError;
    Resp resp{};
    DataSource dataSource{};
    CBusy cBusy{};
    DataId dataId{};
    ChiDataBeat data{};
    bool traceTag{};
};

struct RxSnp {
    TxnId txnId{};
    NodeId srcId{};
    NodeId tgtId{};
    SnpOpcode opcode{};

    // RXSNP carries PA[47:3], not a byte address.  The value is kept in the
    // common Address type until line_image provides the decode helper.
    SnoopAddress addr{};
    TagAlias tagAlias{};
    bool ns{};
    bool traceTag{};
};

}  // namespace chi
}  // namespace sim
}  // namespace yqh

#endif  // YQH_SIM_CHI_TYPES_H
