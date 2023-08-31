#include <vector>


class Solution{
  public:
    std::vector<int> sortedSquared(std::vector<int> &A){
      for (int i = 0; i < A.size(); i++){
        A[i] *= A[i];
      }
      sort(A.begin(), A.end());
      return A;
    }
    std::vector<int> sortedSquared2(std::vector<int> &A){
      std::vector<int> result(A.size(), 0);
      int j, k;
      j = k = A.size() - 1;
      int i = 0;
      while(i <= j){
        if(A[i] * A[i] < A[j] * A[j]){
          result[k--] = A[j] * A[j];
          j--;
        }else{
          result[k--] = A[i] * A[i];
          i++;
        }
      }
      return result;
    }
};
