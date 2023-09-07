#ifndef REMOVE_ELEMENT_HPP
#define REMOVE_ELEMENT_HPP

#include <vector>


class Solution{
  public:
    int removeElement(std::vector<int> &nums, int val){
      size_t size = nums.size();
      for(int i = 0; i < size; i++){
        if(nums[i] == val){
          for(int j = i+1; j<size; j++){
            nums[j-1] = nums[j];
          }
          i--; // Sau khi dịch, vị trí đang xét sẽ là phần tử mới, cần xét tiếp.
          size--;
        }
      }
      return size;
    }
    int removeElement2(std::vector<int> &nums, int val){
      int slowPointer = 0;
      // Lặp qua vector nhanh nhất sử dụng iterator
      for (std::vector<int>::iterator fastPointer = nums.begin(); fastPointer != nums.end(); fastPointer++){
        if(*fastPointer != val){
          nums[slowPointer++] = *fastPointer;
        }
      }
      return slowPointer;
    }
};

#endif