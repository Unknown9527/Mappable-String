#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

// mappable
TEST(FindMappingTest1, FindMappingTest1) {
  Solution solution;

  string input1 = "add";
  string input2 = "egg";
  map<char,char> expected;
  expected['a'] = 'e';
  expected['d'] = 'g';

  EXPECT_EQ(solution.FindMapping(input1, input2), expected);
}
// mappable
TEST(FindMappingTest2, FindMappingTest2) {
  Solution solution;

  string input7 = "aabbrr";
  string input8 = "ddeekk";

  map<char,char> expected;
  expected['a'] = 'd';
  expected['b'] = 'e';
  expected['r'] = 'k';

  EXPECT_EQ(solution.FindMapping(input7, input8), expected);
}

// not mappable but not because of length
TEST(FindMappingTest3, FindMappingTest3) {
  Solution solution;

  string input5 = "harder";
  string input6 = "waiter";

  map<char,char> expected;

  EXPECT_EQ(solution.FindMapping(input5, input6), expected);
}

// not mappable because of length
TEST(FindMappingTest4, FindMappingTest4) {
  Solution solution;

  string input3 = "extreme";
  string input4 = "egg";

  map<char,char> expected;

  EXPECT_EQ(solution.FindMapping(input3, input4), expected);
}