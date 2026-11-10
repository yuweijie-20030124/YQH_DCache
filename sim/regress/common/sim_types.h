#ifndef YQH_SIM_TYPES_H
#define YQH_SIM_TYPES_H

#include <array>
#include <bitset>
#include <cstddef>
#include <cstdint>

#include "sim_config.h"

namespace yqh {
namespace sim {

// -----------------------------------------------------------------------------
// Scalar types
// -----------------------------------------------------------------------------
// Keep protocol and address values in fixed-width C++ types.  The generated
// Verilator port widths are handled separately by dut_adapter.
using Byte = std::uint8_t;
using Address = std::uint64_t;
using Cycle = std::uint64_t;

using TxnId = std::uint8_t;
using DbId = std::uint8_t;
using CpuReqId = std::uint8_t;
using MshrId = std::uint8_t;
using NodeId = std::uint8_t;

// -----------------------------------------------------------------------------
// Fixed-size data images
// -----------------------------------------------------------------------------
// Byte 0 is always the lowest-address byte.  Conversion to and from Verilator
// wide signals belongs in dut_adapter.cpp, not in these type definitions.
using CacheLine = std::array<Byte, config::kCacheLineBytes>;
using ChiDataBeat = std::array<Byte, config::kChiDataBytes>;
using CpuData = std::array<Byte, config::kLoadDataBytes>;
using AtomicData = std::array<Byte, config::kAtomicDataBytes>;

// A mask bit corresponds to the byte with the same index.  The bitset form is
// intentional: it makes mask merging and individual-byte checks explicit while
// keeping packed integer conversion out of the model layer.
using LineByteMask = std::bitset<config::kCacheLineBytes>;
using ChiByteEnable = std::bitset<config::kChiDataBytes>;
using CpuByteMask = std::bitset<config::kLoadMaskBits>;
using AtomicByteMask = std::bitset<config::kAtomicMaskBits>;

// -----------------------------------------------------------------------------
// Shared classifications
// -----------------------------------------------------------------------------
// These classifications are used by more than one model.  Detailed state
// machines stay in the model that owns them.
enum class Channel : std::uint8_t {
    TxReq,
    TxEvt,
    TxRsp,
    TxDat,
    RxRsp,
    RxDat,
    RxSnp,
};

enum class CpuLane : std::uint8_t {
    Load0 = 0,
    Load1 = 1,
};

enum class CpuOperationKind : std::uint8_t {
    Load,
    Store,
    Atomic,
    Cmo,
};

}  // namespace sim
}  // namespace yqh

#endif  // YQH_SIM_TYPES_H
