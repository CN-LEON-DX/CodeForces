// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

// Example 1:

// Input: n = 2
// Output: 2
// Explanation: There are two ways to climb to the top.
// 1. 1 step + 1 step
// 2. 2 steps
// Example 2:

// Input: n = 3
// Output: 3
// Explanation: There are three ways to climb to the top.
// 1. 1 step + 1 step + 1 step
// 2. 1 step + 2 steps
// 3. 2 steps + 1 step
 

// Constraints:
// 1 <= n <= 45

// Chúng tá hãy liệt kê các trường hợp có thể  xảy ra:
// TH1: n = 1 => chắc chắn là 1 rồi 
// TH2: n = 2 => có 1 cách là 1 + 1
// TH3: n = 3 => có 1+1+1, 1+2, 2+1
// TH4: n = 4 => có bao nhiêu cách: nếu bước đầu đi là 1=> còn 3: 3 thì lại có 3 cách
//                                                     2=> còn 2: có 2 cách
// Tức là ta có một cây:
//      4
//   1     2
//   3     2
// 1 2     1 1
// Tức là sẽ có tổng số trường hợp sau: 3+2 = 5 
// Ta có thể thấy các đáp số trên xắp xếp trên một quy luật: 1, 2, 3, 5, 8.....
// => Đây là day fibonaci, hãy chứng minh điều trên là đúng: f(n) = f(n-1)+f(n-2) + đồ thì fibo 
// Gio đây bạn có thiết lập các code để giải bài trên
// Với cách trên thì độ phức tạp O(n) beat 100 % user using c++
// Nhưng mà nó lại chỉ beat 3x % người dùng c++

#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n; cin >> n; 
    int f1 = 1;
    int f2 = 2;
    int result = 1;
    if (n==1) cout << 1 << endl;
    else if (n==2) cout << 2 << endl;
    else {
        n-=2;
        while (n--){
            result = f1 + f2;
            f1 = f2;
            f2 = result;
        }
        cout << result << endl;
    }
    return 0;
}