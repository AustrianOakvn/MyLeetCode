# 24 Hoán đổi 2 nodes theo cặp

Cho một danh sách liên kết, hãy hoán đổi các node theo từng cặp cạnh nhau. Phải giải mà không được thay đổi giá trị của các node trong danh sách liên kết (chỉ có các node được thay đổi)

Example
`Input: head = [1, 2, 3, 4]`
`Output: [2, 1, 4, 3]`

Example 2:
`Input: head = []`
`Output: []`

Example 3:
`Input: head=[1]`
`Output: [1]`


while cur
cur = 2, prev = 1
<!-- tmp = cur->next -->
tmp_cur = cur->next->next
tmp_prev = cur->next
prev->next = cur->next
cur->next = prev
cur = tmp_cur
prev = tmp_prev

