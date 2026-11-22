#include <cstdlib>
#include <cerrno>
#include <stdexcept>

#include "testframework.h"

namespace yqh {
namespace regress {
namespace tests {

// transfer terminal char number to true number
std::uint64_t parse_u64(const std::string& text, const char* option) {
    if (text.empty() || text.front() == '-') throw std::invalid_argument(std::string("invalid ") + option);
    errno = 0;
    char* end = nullptr;
    const auto value = std::strtoull(text.c_str(), &end, 0);
    if (errno == ERANGE || end == text.c_str() || *end != '\0') {
        throw std::invalid_argument(std::string("invalid ") + option + ": " + text);
    }
    return value;
}


TestOptions parse_options(int argc, char** argv) {
    TestOptions options{};
    for (int index = 1; index < argc; ++index) {
        const std::string argument = argv[index];
        if (argument == "--test") {
            if (++index >= argc) throw std::invalid_argument("--test requires a value");
            options.testName = argv[index];
        } else if (argument == "--seed") {
            if (++index >= argc) throw std::invalid_argument("--seed requires a value");
            options.seed = parse_u64(argv[index], "--seed");
        } else if (argument == "--max-cycles") {
            if (++index >= argc) throw std::invalid_argument("--max-cycles requires a value");
            options.maxCycles = parse_u64(argv[index], "--max-cycles");
        } else if (argument == "--vcd") {
            options.vcd = true;
        } else if (argument == "--help") {
            options.testName = "help";
        } else {
            throw std::invalid_argument("unknown option: " + argument);
        }
    }
    return options;
}    

const TestCase& find_test(const std::string& name) {
    for (const auto& test : available_tests()) {
        if (name == test.name) return test;
    }
    throw std::invalid_argument("unknown test: " + name);
}

const std::vector<TestCase>& available_tests() {
    static const std::vector<TestCase> tests = {
        {"single_load_miss", TestKind::SingleLoadMiss, run_single_load_miss},
        // to be add more testcase
    };
    return tests;
}

void run_one_test(yqh::regress::tests::TestOptions option,const TestCase& one_test_name){
    printf("you in function'run_one_test' %s\n",one_test_name.name);
}

// void test_begin(yqh::regress::tests::TestOptions option,){

// }

}  // namespace tests
}  // namespace regress
}  // namespace yqh