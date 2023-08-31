# 27. Remove elements

Đề bài: Cho một mảng nums và 1 giá trị val, hãy loại bỏ tất cả các giá trị val trong mảng theo cách **inplace**và trả về độ dài mới của mảng sau khi loại bỏ.

- **inplace** hiểu là phải thực hiện trên cùng dữ liệu đầu vào, không được sử dụng thêm bộ nhớ. 
Không được phép sử dụng thêm không gian lưu trữ, điều kiện không gian lưu trữ là O(1) và thực hiện thay đổi cùng vị trí.

Thứ tự của các phần tử trong mảng có thể thay đổi, không cần quan tâm đến các phần tử, chỉ quan tâm đến độ dài mới. Các phần tử không bị loại bỏ thì phải nằm ở đầu của mảng.

Ví dụ: `nums=[3, 2, 2, 3]` và `val=3`, hàm sẽ trả về độ dài mới là 2. Các phần tử đứng đầu là `2, 2`
`nums=[0, 1, 2, 2, 3, 0, 4, 2]` và val=2, hàm trả về độ dài mới là 5. Các phần tử đứng đầu là `0, 1, 3, 0, 4` 


## Hướng giải 

- Nên nhớ mảng là tập hợp các phần tử xếp liên tiếp nhau trong bộ nhớ, ta không thể xóa phần tử cụ thể được, chỉ có thể ghi đè lên chúng

### Brute force

- Thực hiện 2 vòng lặp, 1 vòng lặp phía ngoài duyệt qua toàn bộ các phần tử trong mảng, phần tử phía trong thực hiện đẩy các phần tử lên đầu mảng.

```cpp
Xem file array.hpp
```
Time complexity: O(n)

Space complexity: O(1)
### Phương pháp sử dụng 2 con trỏ

- Ta sẽ có 2 con trỏ: con trỏ nhanh và con trỏ chậm. Sử dụng 2 con trỏ này có thể thực hiện 2 vòng lặp lồng nhau trong 1 vòng lặp duy nhất.

Ta định nghĩa về 2 con trỏ như sau:
- Con trỏ nhanh: TÌm các phần tử của mảng mới. Mảng mới là mảng không có chứa giá trị cần tìm.
- Con trỏ chậm: trỏ đến vị trí (index) của giá trị cần phải được cập nhật.

```c++
Xem file array.hpp
```

