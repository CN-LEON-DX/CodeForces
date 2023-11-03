#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a;
    stack<int> st;
    while (n--){
        int k; cin >> k;
        a.push_back(k);
    }
    for (int i =0;i<a.size();i++){
        while (!st.empty() && a[st.top()] < a[i]) st.pop();
        if (!st.empty()) cout << st.top()+1 << " ";
        else cout << -1 << " ";
        st.push(i);
    }
    stack<int> st1;
    st.swap(st1);
    //Complexity: 0(N)
    return 0;
}
// Thao tác với stack:
// CÁCH 1: DUYỆT TRÂU VỚI COMPLEXITY: O(N^2)
//     st.emplace(???); hàm này So với hàm push(), hàm emplace() có một số ưu điểm sau:

// Hàm emplace() không tạo một bản sao của phần tử mới, mà chỉ đơn giản là gọi constructor của phần tử đó. Điều này có thể cải thiện hiệu suất trong một số trường hợp.
// Hàm emplace() có thể được sử dụng để chèn các đối tượng có constructor có tham số.

//     st.empty();
//     st.pop();
//     st.push();
//     st.size();
// ex swap()
    //    stack<int> st1;
    //    st1.swap(st) hoán đổi thông tin hai stack với nhau:
//     stack1.swap(my_stack1);
// cout << -1 <<" ";
//     for (int i =1;i<a.size();i++){
//         bool check = false;
//         for (int j=i-1;j>=0;j--){
//             if (a[i]<a[j]){
//                 cout << j+1 << " ";
//                 check = true;
//                 break;
//             }
//         }
//         if (!check){
//             cout << -1 << " ";
//         }
//     }
    
// Vấn đề khi dùng stack
// Cho một dãy số gồm n số nguyên dương ai (n≤106,  ai≤109).
//  Với mỗi vị trí i, hãy in ra vị trí j gần nhất về phía bên trái 
//  thoả mãn ai < aj. Nếu như không có phần tử nào thoả mãn in ra -1.

// Ví dụ:

// Input
// 7
// 2 1 3 2 8 5 7
// Output
// -1 1 -1 3 -1 5 5