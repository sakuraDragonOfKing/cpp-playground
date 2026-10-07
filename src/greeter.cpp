#include "greeter.h"

namespace playground {

std::string greet(const std::string& name) {
  if (name.empty()) {
    return "Hello, stranger!";
  }
  return "Hello, " + name + "!";
}

}  // namespace playground
