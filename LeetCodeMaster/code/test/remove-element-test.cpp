#include "catch2/catch.hpp"
#define CATCH_CONFIG_MAIN
#include "remove-element.hpp"


TEST_CASE( "simple" )
{
    std::vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    Solution solution;
    int length = solution.removeElement2(nums, val);
    REQUIRE(length == 5)
}
