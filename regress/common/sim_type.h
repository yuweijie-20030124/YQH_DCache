#ifndef YQH_SIM_TYPES_H
#define YQH_SIM_TYPES_H

#include <array>
#include <bitset>
#include <cstddef>
#include <cstdint>

#include "sim_config.h"

namespace yqh {
namespace regress {
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


}  // namespace regress
}  // namespace yqh

#endif //sim_type.h

