#pragma once

#include <string>

namespace playground {

// 返回一句问候语。
// 这个函数本身没意义，它的作用是验证「编译 + 测试 + CI」这条链路是通的。
std::string greet(const std::string& name);

}  // namespace playground
