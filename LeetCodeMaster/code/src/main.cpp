#include "remove-element.hpp"
#include <iostream>


int main(int argc, char *argv[]){
    Solution solution;
    std::vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int length = solution.removeElement2(nums, val);
    std::cout << "new length" << length << std::endl;
}