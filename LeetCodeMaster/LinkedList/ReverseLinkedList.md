# Đảo ngược danh sách liên kết

Cho biết `head` của một danh sách liên kết đơn, hãy đảo ngược danh sách liên kết đơn đó.

Example 1:
`Input: head = [1, 2, 3, 4, 5]`
`Output: [5, 4, 3, 2, 1]`

Example 2:
`Input: head = [1, 2]`
`Output: []`

Giới hạn
 
- Số lượng nodes trong danh sách nằm trong khoảng `[0, 5000]`
- `-5000 <= Node.val <= 5000`


## Hướng giải
- Nếu ta định nghĩa một danh sách liên kết đơn mới thì sẽ tốn tài nguyên bộ nhớ một cách không cần thiết.
- Ta chỉ cần thay đổi hướng trỏ của con trỏ trong danh sách liên kết. Sau khi thực hiện **đảo ngược** thì, node cuối cùng trong danh sách liên kết sẽ là node đầu. Không có node nào được thêm vào cũng như bị xóa đi, chỉ có hướng của con trỏ bị thay đổi.

- Ta có thể sử dụng pattern 2 con trỏ ở bài trước sử dụng, một con trỏ trỏ tới vị trí hiện tại, một con trỏ trỏ tới vị trí trước đó.

- Khi khởi tạo thì con trỏ `cur` sẽ trỏ vào `head` node và cont rỏ `pre` sẽ trỏ vào null.

- Khi quá trình **đảo ngược** bắt đầu. `cur->next` sẽ phải được lưu vào một con trỏ `tmp`. Lý do cần lưu vào con trỏ `tmp` là do ta sẽ thay đổi hướng của `cur->next` ngược lại và cần một con trỏ lưu để có thể đi tiếp.

- Tiếp theo đó, trong vòng lặp ta thực hiện di chuyển con trỏ `pre`, `cur` với logic như trên.

- Đến cuối cùng thì con trỏ `cur` trỏ về `null`, vòng lặp kết thúc, và danh sách liên kết đã được đảo ngược. Vào lức này, chúng ta chỉ cần trả lại giá trị của con trỏ `pre` là được do con trỏ này sẽ đang trỏ tới node `head`.

```c++
Xem file 
```