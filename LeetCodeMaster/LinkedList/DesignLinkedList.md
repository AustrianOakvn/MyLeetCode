# 707 Thiết kế danh sách liên kết

Hãy thiết kế danh sách liên kết. Có thể lựa chọn sử dụng kết nối đơn hoặc kết nối kép.
Một node trong danh sách liên kết đơn sẽ bao gồm 2 thuộc tính là `val` và `next`. `val` là giá trị của node hiện tại và `next` là con trỏ đến node tiếp theo.

Nếu sử dụng danh sách liên kết kép, ta sẽ phải cần thêm 1 thuộc tính nữa là `prev` để trỏ đến node trước đó. Giả sử rằng tất cả các node trong danh sách liên kết đều đánh index từ 0.

Cần viết các thành phần sau của `MyLinkedList`
- Constructor `MyLinkedList()`
- `int get(int index)`. Lấy giá trị của phần tử thứ index trong dan sách. Nếu không tồn tại, trả về -1.
- `void addAtHead(int val)`. Thêm node với giá trị val vào trước phần tử đầu tiên của danh sách liên kết. Sau khi chèn thêm, node mới sẽ là node đầu tiên của danh sách liên kết.
- `void addAtTail(int val)`. Thêm node với giá trị `val` vào cuối danh sách liên kết.
- `void addAtIndex(int index, int val)`. Thêm node với giá trị val vào trước node thứ `index` trong danh sách liên kết. Nếu `index` bằng với độ dài của danh sách liên kết, node sẽ được thêm vào cuối danh sách liên kết. Nếu `index` lớn hơn độ dài của danh sách liên kết, node đó sẽ không được thêm.
- `void deleteAtIndex(int index)`. Xóa node thứ `index` trong danh sách liên kết, nếu index tồn tại.

Example 1:

Input
`["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]`
`[[], [1], [3], [1, 2], [1], [1], [1]]`
Output
`[null, null, null, null, 2, null, 3]`

Explanation
`MyLinkedList myLinkedList = new MyLinkedList();
myLinkedList.addAtHead(1);
myLinkedList.addAtTail(3);
myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
myLinkedList.get(1);              // return 2
myLinkedList.deleteAtIndex(1);    // now the linked list is 1->3
myLinkedList.get(1);              // return 3`



