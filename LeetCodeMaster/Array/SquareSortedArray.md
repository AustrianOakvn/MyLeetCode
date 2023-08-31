# 997. Square of a Sorted Array

Bài toán bình phương của một mảng đã được sắp xếp

Đề bài: Cho một mảng sô nguyên `nums` đã được sắp xếp theo thứ tự giảm dần, Hãy trả về mảng là bình phương của các số trong `nums` và vẫn giữ thứ tự giảm dần.

Example 1:
`
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
`

Example 2:
`
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
`

Constraints:
`
1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.
`

## Hướng giải

### Brute force by sorting

Sau khi bình phương thì sắp xếp lại mảng.
```c++
Xem file square-ordered-array.hpp
```
Time complexity: $O(n+nlogn)$

### Phương pháp 2 con trỏ.

- Chúng ta quan sát sẽ nhận thấy đặc tính của mảng số nguyên trong ví dụ đó là nếu mảng có chứa cả số âm thì nếu thực hiện bình phương, các số lớn nhất sẽ nằm về phía 2 đầu của mảng, và giảm dần khi ta đi vào giữa mảng. Sử dụng tính chất này, ta có thể sử dụng 2 con trỏ. Một con trỏ duyệt từ trái qua, một con trỏ duyệt từ phải qua. So sánh 2 phần tử mà 2 con trỏ đang trỏ đến, rồi đưa vào mảng mới.
- Định nghĩa một mảng mới, kích thước bằng mảng cũ, và 1 con trỏ k trỏ đến cuối mảng.
```c++
Xem file square-ordered-array.hpp
```
Time complexity: $O(n)$

