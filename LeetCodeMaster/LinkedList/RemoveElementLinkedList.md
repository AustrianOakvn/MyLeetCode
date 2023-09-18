# 203. Xóa phần tử trong danh sách liên kết.

Cho biết `head` của một danh sách liên kết và 1 số nguyên `val`, hãy loại bỏ tất cả các phần tử của danh sách liên kết có `Node.val==val`, và trả về `head` mới.

Example
`Input: head = [1, 2, 6, 3, 4, 5, 6], val=6`
`Output: [1, 2, 3, 4, 5]`

Example 2:
`Input: head = [], val = 1`
`Output: []`

Example 3:
`Input: head = [7, 7, 7, 7], val = 7`
`Ouput: []`

Constraints:
- Số node nằm trong khoảng từ `[0, $10^4$]`
- `1 <= Node.val <= 50`
- `0 <= val <= 50`

## Ý tưởng
Giả sử ta lấy danh sách liên kết `[1, 4, 2, 4]` làm ví dụ và phần tử cần loại bỏ là `4`
Nếu để ý ta sẽ thấy rằng việc xóa node head sẽ khác so với các node còn lại, code phần lời giải đưa cho chúng ta implementation của danh sách nối đơn như sau:
```cpp
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
```
Với danh sách nối đơn kiểu này thì ta không có cách nào khác ngoài implement thao tác xóa head và các node còn lại một cách riêng rẽ. Để không phải thực hiên riêng rẽ thì ta có thể tự implement 1 node head ảo (virtual head node).
Tóm tại sẽ có 2 cách thực hiện:
- Dùng danh sách liên kết gốc
- Dùng danh sách liên kết có node head ảo.

Code sử dụng cách thứ nhất và thứ 2:
```
Xem file remove-element-linked-list.hpp
```
