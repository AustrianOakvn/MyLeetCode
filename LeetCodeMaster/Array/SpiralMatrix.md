# 59. Spiral matrix II

[Link](https://leetcode.com/problems/spiral-matrix-ii/)

Đề bài: Cho một số nguyên dương `n`, hãy tạo một ma trận `nxn` được điền đầy bởi các phần tử từ 1 đến `$n^2$` theo thứ tự xoắn ốc bắt đầu từ trái sang phải.

Example 1:

Input: `n = 3`
Output: `[[1,2,3],[8,9,4],[7,6,5]]`
Example 2:

Input: `n = 1`
Output: `[[1]]`

Constraints:

`1 <= n <= 20`

## Hướng giải

Về mặt thuật toán, bài toán này không có gì đặc biệt, chúng ta biết hướng giải sẵn từ đề bài đó là phải điền đầy ma trận theo thứ tự xoắn ốc. Để giải, cần chú ý đặt ra các điều kiện về biên.

```c++
Xem file spiral-matrix.hpp
```
