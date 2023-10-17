#include <bits/stdc++.h>
using namespace std;
// ta có thể hieeuy như sau 
// Để tối ưu nhất cho việc lên lịch trình các buổi biểu diễn
// Ta xét như sau: đầu tiên thời gian phải là gồm các thời gian biểu diễn các bài nhạc sau đó là nghỉ 10 phút
// Sau đó thêm vào các joke vào 5 phút vào trong khi singer nghỉ 10 phút tức là có thể joke 2 lần liên tiếp 
// Từ đó ta có thể liệt kê các khoảng thời gian như: t1 + 10 + t2 + 10 +...+10+ tn = 10*(n-1) + sum_array_of_time() = sum_time
// Vì vậy ta chỉ cần check các thông tin rằng sum_time > duration thì là không thể xắp xếp các joke vào đó 
// Vậy ta có thể thêm vào các joke bằng cách đơn giản bằng = (duration - sum_time)/5
// Examples
// inputCopy
// 3 30
// 2 2 1
// outputCopy
// 5
// inputCopy
// 3 20
// 2 1 1
// outputCopy
// -1
int main(){
    int n, duration;
    cin >> n >> duration;
    vector<int> a(n);
    for (int i=0;i<n;i++) cin >> a[i];
    long long sum_time = accumulate(a.begin(), a.end(), 0);
    if ((sum_time+10*(n-1))>duration) cout << -1 << endl;
    else {
        cout << (duration-sum_time)/5 << endl;
    }
    return 0;
}
