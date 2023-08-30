# 704. Thuật toán tìm kiếm nhị phân

Đề bài: Cho một mảng số nguyên n-phần tử đã được sắp xếp theo thứ tự tăng dần và một giá trị mà ta muốn tìm, hãy viết một hàm để tìm giá trị và trả về index của giá trị đó nếu nó tồn tại, nếu không tồn tại, trả về -1.

Hint:
- Tất cả các phần tử là unique
- n sẽ nằm giữa [1, 10000]
- Mỗi phần tử sẽ là 1 số nằm giữa [-9999, 9999]

- Hướng giải quyết:
Điều quan tâm ở bài này đó là mảng đã được sắp xếp, cùng với đó là không có phần tử nào lặp lại trong mảng vì nếu có phần tử lặp thì giá trị index sẽ không còn unique. Đây là điều kiện cho thuật toán tìm kiếm nhị phân. 

Thuật toán nhị phân về mặt logic rất đơn giản, nhưng nó sẽ cần định nghĩa điều kiện biên đúng. Thường sẽ có hai kiểu định nghĩa điều kiện biên. Kiểu thứ nhất là cả 2 biên trái và bên phải đều đóng. Kiểu thứ hai là 1 bên đóng 1 bên mở.

### Các giải thứ nhất cả 2 biên đóng
Theo định nghĩa thì giá trị ta cần tìm sẽ nằm ở trong khoảng `[left, right]` nên sẽ có 2 điểm cần chú ý.
- `while(left<=right)` được sử dụng vì sẽ có trường hợp left=right
- Nếu `nums[middle]>target` thì `right` sẽ được gán bằng `middle-1`vì giá trị middle hiện tại khác target. Tương tự khi điều kiện ngược lại thì `left` được gán `middle+1`

Implementation
```c++
class Solution{
    public:
    int search(vector<int> &nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right){
            // middle tính từ gốc bên trái sang cộng với số phần tử /2
            int middle = left + ((right-left)/2);
            if (nums[middle] > target){
                right = middle - 1;
            }else if (nums[middle] < target){
                left = middle + 1;
            }else{
                return middle;
            }
        }
        return -1;
    }
};
```

Time complexity: O(log n)
Space complexity: O(1)

### Cách giải thứ hai 

- Ở đây giá trị cần tìm được định nghĩa trong khoảng đóng bên trái nhưng mở bên phải tương đương `[left, right)`. Do đó việc xử lý biên sẽ khác so với code ở trên

```c++
class Solution{
    public:
    int search(vector<int> &nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        while (left < right){
            // Phép dịch bit sang trái 1 lần tương đương với chia cho 2
            int middle = left + ((right-left) >> 1);
            if (nums[middle] > target){
                right = middle;
            }else if (nums[middle] < target){
                left = middle + 1;
            }else{
                return middle;
            }
        }
        return -1;
    }
};
```

Time complexity: O(log n)
Space complexity: O(1)
