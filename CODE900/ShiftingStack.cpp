
// the array satifying look like 0, 1, 2, 3, ...., n-1
// so check sum_element >= (n-1)*n/2 true -> yes else no
// we seperate the number of caculation by using the check sum_element_curr <= sum_we_need
#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    long long sum = 0, need = 0;
    for (int i = 0; i < n; ++i) {
        need += i;
        sum += a[i];
        // optimize logic code if we catch that case doesnt satify return immediately 
        if (sum < need) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}