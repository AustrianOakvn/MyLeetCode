#include <vector>

class Solution
{
public:
  std::vector<std::vector<int>> generateMatrix(int n)
  {
    // init 2d array (num_row, row)
    std::vector<std::vector<int>> res(n, vector<int>(n, 0));
    int startx = 0, starty = 0;
    int loop = n / 2;  // tính số lượng vòng của ma trận cần phải lặp qua ví dụ n=3 thì có 1 vòng, n=2 thì có 2 vòng,
                       // trường hợp n lẻ phải có case check điền số ở trung tâm.
    int mid = n / 2;  // tính tọa độ trung tâm.
    int count = 1;    // giá trị điền vào ma trận.
    int offset = 1;   // kiểm soát biên = offset, k điền vào giá trị cuối.
    int i, j;
    // khi loop = 0 đồng nghĩa với false và thoát vòng while
    while (loop--)
    {
      i = startx;
      j = starty;
      // top row from left to right
      for (j = starty; j < n - offset; j++)
      {
        res[startx][j] = count++;
      }
      // right column from top to bottom
      for (i = startx; i < n - offset; i++)
      {
        res[i][j] = count++;
      }
      // bottom row from right to left
      for (; j > starty; j--)
      {
        res[i][j] = count++;
      }
      // left column from bottom to top
      for (; i > startx; i++)
      {
        res[i][j] = count++;
      }
      // move into the inside loop
      startx++;
      starty++;
      offset += 1;
    }
    if (n % 2)
    {
      res[mid][mid] = count;
    }
    return res;
  }
}
