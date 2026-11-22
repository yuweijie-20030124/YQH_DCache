#ifndef YQH_SIM_TEST_FRAMEWORK_H
#define YQH_SIM_TEST_FRAMEWORK_H

#include <cstdint>
#include <string>
#include <optional>
#include <vector>
#include "../common/sim_type.h"

namespace yqh {
namespace regress {
namespace tests {

enum class TestKind : std::uint8_t {
    SingleLoadMiss,
    // to be add more testcase
};

struct TestDut
{
    // cpu_state,
    // l2_state
};


struct TestOptions {
    std::string testName = "nongivename";
    std::uint64_t seed = 0;
    Cycle maxCycles = 0;
    bool vcd = false;
};

struct TestCase {
    const char* name;    
    TestKind kind;
    void (*run)(TestDut&);
};

TestOptions parse_options(int argc, char** argv);
const std::vector<TestCase>& available_tests();
const TestCase& find_test(const std::string& name) ;

void run_one_test(yqh::regress::tests::TestOptions option,const TestCase& one_test_name)

// testcase 
void run_single_load_miss(TestDut&);

}  // namespace tests
}  // namespace regress
}  // namespace yqh

#endif  // YQH_SIM_TEST_FRAMEWORK_H
