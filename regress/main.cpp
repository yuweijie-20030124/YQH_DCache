#include "verilated.h"

#include <exception>
#include <iostream>
#include "testFramework/testframework.h"

// void run_test(const yqh::regress::tests::TestOptions& options,
//               const yqh::regress::tests::TestCase& test) {
//     using namespace yqh::regress;
//     const std::string wavePath = options.vcd ? "regress_logs/" + options.testName + ".vcd" : "";
//     Simulation simulation(config.seed, config.maxCycles, wavePath);
//     TestContext context(simulation, config);
//     test.run(context, config);
//     context.finish();  // 测试返回只表示停止提交，排空和检查完成后才能 PASS。
//     std::cout << "[PASS] " << options.testName << " seed=" << options.seed << '\n';
// }



int main(int argc, char** argv) {

    // init_

    yqh::regress::tests::TestOptions options{};
        Verilated::commandArgs(argc, argv);
        options = yqh::regress::tests::parse_options(argc, argv);
        const auto& tests = yqh::regress::tests::available_tests();
        yqh::regress::tests::TestCase one_test_name = yqh::regress::tests::find_test(options.testName);
        if (options.testName == "help") {
            std::cout << "Usage: DCache [--test NAME] [--seed N] [--max-cycles N] [--vcd]\nTests:\n";
            for (const auto& test : tests) std::cout << "  " << test.name << '\n';
            std::cout << "  all\n";
            return 0;
        }

        // if (options.testName == "all") {
        //     for (const auto& test : tests) run_test(options, test);
        // } else {
        //     run_test(options, yqh::regress::tests::find_test(options.testName));
        // }
        
        else {
            run_one_test(options,one_test_name);
            // run_test(options, yqh::regress::tests::find_test(options.testName)); //test add must be in[0x80000000 ~ 0x8FFFFFFF]
        }
        return 0;
}