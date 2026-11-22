// #include <cstdlib>
// #include <cerrno>
// #include <stdexcept>

#include "testframework.h"

namespace yqh {
namespace regress {
namespace tests {

void run_single_load_miss(TestDut&) {
    // 同一个 tick 之前可以提交多条操作；do_load 自己不推进时钟。
    // test.do_load(config.loadAddress, LoadExpectation::Miss);
    // test.tick();
    // 返回后由运行框架 finish：继续推进、检查并排空，不在这里写等待循环。
}

}  // namespace tests
}  // namespace regress
}  // namespace yqh
