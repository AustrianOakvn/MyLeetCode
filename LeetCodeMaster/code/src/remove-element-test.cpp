// #define TEST_NO_MAIN

#include "acutest.h"
#include "remove-element.hpp"
#include <stdexcept>

void test_remove_element(){
    Solution solution;
    std::vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    TEST_ASSERT(solution.removeElement2(nums, val) == 5);
}

TEST_LIST = {
    {"remove-element-test", test_remove_element},
    {nullptr, nullptr}
};