# 209. Minimum Size Subarray Sum

Đề bài: Cho 1 mảng `nums` gồm các số nguyên dương và một số nguyên dương `target`. Hãy trả về độ dài tối thiểu của mảng con có tổng hớn hơn hoặc bằng `target`. Nếu không tồn tại mảng con nào, trả về 0.

Chú ý **subarray(mảng con)** được định nghĩa là một chuỗi các phần tử nối tiếp nhau tồn tại trong mảng gốc.

Example 1:

Input: `target = 7, nums = [2,3,1,2,4,3]`
Output: `2`
Explanation: `The subarray [4,3] has the minimal length under the problem constraint.`
Example 2:

Input: `target = 4, nums = [1,4,4]`
Output: `1`
Example 3:

Input: `target = 11, nums = [1,1,1,1,1,1,1,1]`
Output: `0`
 

Constraints:

- `1 <= target <= 109`
- `1 <= nums.length <= 105`
- `1 <= nums[i] <= 104`

## Hướng giải

### Brute force

Duyệt qua mảng dùng 2 vòng lặp, vòng thứ nhất lặp qua các phần tử mảng `nums`, vòng lặp thứ 2 lặp các phần tử còn lại của mảng và cộng vào phần tử đang xét của vòng lặp bên ngoài.

```cpp
Xem file subarray-minimum-element.hpp
```

### Sliding window (phương pháp cửa số trượt)

- Sliding window là phương pháp thực hiện thay đổi vị trí ban đầu và vị trí kết thúc của một subsequence để đạt được kết quả.

Để implement sliding windows, ta cần làm rõ 3 yếu tố sau:
    - Bên trong cửa sổ đại diện cho giá trị gì
    - Làm sao để di chuyển vị trí bắt đầu của cửa sổ
    - Làm sao để di chuyển vị trí kết thúc của cửa sổ.

- Ở đây thì giá trị trong cửa sổ đại diện cho tổng `sum`

- Trong cách giải brute force như trên thì 1 vòng lặp đại diện cho vị trí bắt đầu và 1 vòng lặp là vị trí kết thúc. Ta sẽ cần đưa về sử dụng 1 vòng lặp duy nhất. Vấn đề quan trọng là vòng lặp đó đại diện cho vị trí ban đầu hay kết thúc.

- Nếu chọn vòng lặp là vị trí ban đầu thì ta sẽ quay trở lại giống brute force. Vì thế chọn vòng lặp là vị trí kết thúc của sliding window. Vấn đề tiếp theo là làm sao chúng ta thay đổi được vị trí bắt đầu của sliding window.

- Ta sẽ thực hiện thay đổi vị trí ban đầu của cửa sổ trượt bằng cách so sánh `sum` với `s` nếu `sum` lớn hơn hoặc bằng thì vị trí ban đầu sẽ trượt sang phải.

```cpp
Xem file subarray-minimum-element.hpp
```
Time complexity: O(n)
Space complexity: O(1)
