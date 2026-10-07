#include "greeter.h"

#include <gtest/gtest.h>

TEST(GreeterTest, GreetsByName) {
  EXPECT_EQ(playground::greet("Infra"), "Hello, Infra!");
}

TEST(GreeterTest, HandlesEmptyName) {
  EXPECT_EQ(playground::greet(""), "Hello, stranger!");
}

TEST(GreeterTest, DoesNotMutateInput) {
  const std::string name = "world";
  playground::greet(name);
  EXPECT_EQ(name, "world");
}
