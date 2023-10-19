// Cho một dãy n số nguyên dương ai (n ≤ 10^5, ai ≤ 10^9). Có t truy vấn t ≤ 10^6,
//  mỗi truy vấn gồm hai số nguyên dương i và j yêu cầu in ra tổng của các số trong đoạn
//   ai, ai+1, …, aj.

// Ví dụ:
// Input
// 10
// 1 2 3 4 5 6 7 8 9 10
// 4
// 1 2
// 2 4
// 1 6
// 5 8
// Output
// 3 9 15 26 ... 

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MaxN = 1 + 1e5;
int n, a[MaxN], t, s[MaxN];
int main(){
    cin >> n;
    for(int i = 1 ; i <= n ; ++i) cin >> a[i];
    for(int i = 1 ; i <= n ; ++i) s[i] = s[i - 1] + a[i];
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << s[y] - s[x - 1] << endl;
    }
    return 0;
}