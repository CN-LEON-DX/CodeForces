#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> qu;
    int n; cin >> n;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    qu.push(7);
    qu.emplace(19);
    cout << qu.size() << endl;
    while (!qu.empty()){
        cout << qu.front() << endl;
        qu.pop();
    }

    // DEQUE
    deque<int> deque;
    return 0;
}


// QUEUE
// Một queue sẽ hỗ trợ các thao tác sau:

// Thêm phần tử vào cuối queue //put()
// Hàm thêm vào một constructor mà các loại khác cũng đc nhưng mà không chạy nhanh bằng
// Lấy ra phần tử đầu tiên trong queue //=> pop.font()
// Hàm empty() và hàm swap cũng có thể dùng tương tự nhu bên stack
// Cũng là lấy ra phần tử đầu tiên nhưng là mất luôn sau đó là trả về một giá trị //qu.pop
// Lấy ra kích thước của queue //qu.size()
// Lấy phần tử cuối cùng của queue // => dùng hàm queue.back()


// DEQUE

// THỬA HƯỞNG MỌI ĐẶC TÍNH MÀ STACK VÀ QUEUE CÓ NÊN NÓ RẤT MẠNH VÀ ÁP DỤNG NHIỀU
// CÁC HÀM CÓ THỂ SỬ DỤNG NHƯ:
// 

// constructor(): Hàm tạo deque rỗng.
// push_front(): Chèn một phần tử vào đầu deque.
// push_back(): Chèn một phần tử vào cuối deque.
// pop_front(): Loại bỏ phần tử đầu tiên trong deque.
// pop_back(): Loại bỏ phần tử cuối cùng trong deque.
// front(): Trả về phần tử đầu tiên trong deque.
// back(): Trả về phần tử cuối cùng trong deque.
// empty(): Trả về true nếu deque rỗng, false nếu không.
// size(): Trả về kích thước của deque.
// clear(): Xóa tất cả các phần tử trong deque.
// resize(): Thay đổi kích thước của deque thành một kích thước cụ thể.
// begin(): Trả về iterator cho phần tử đầu tiên trong deque.
// end(): Trả về iterator cho phần tử cuối cùng trong deque.
// rbegin(): Trả về iterator cho phần tử cuối cùng trong deque.
// rend(): Trả về iterator cho phần tử đầu tiên trong deque.