#include <vector>

class Solution{
  public:
    int minSubArrayLen(int s, std::vector<int> &nums){
      int result = INT32_MAX;
      int sum = 0;
      int subLength = 0;
      for (int i = 0; i < nums.size(); i++){
        sum = 0;
        for (int j = i; j < nums.size(); j++){
          sum += nums[j];
          if(sum >= s){
            subLength = j - i + 1;
            result = result > subLength ? subLength : result;
          }
        }
      }
      return result == INT32_MAX ? 0 : result;
    }

    int minSubArrayLen2(int s, std::vector<int> &sum){
      int result = INT32_MAX;
      int sum = 0;
      int i = 0;
      int subLength = 0;
      for (int j=0; j<nums.size(); j++){
        sum += nums[j];
        while(sum >= s){
          subLength = j - i + 1;
          result = result > subLength ? subLength : result;
          sum -= nums[i++];
        }
      }
      return result == INT32_MAX ? 0 : result;
    }
}
