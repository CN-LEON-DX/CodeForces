#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> a;
    cin >> n;
    int max1 = 0;
    int mx = 0, my = 0;
    int min1 = 1e9;
    while (n--){
        int k; cin >> k;
        max1 = max(max1, k); min1 = min(min1, k);
        a.push_back(k);
    }
    for (int x : a) {
        if (x==max1) mx++;
        if (x==min1) my++;
    }
    if (max1 == min1) cout << 0;
    else cout << a.size()- (mx+my) << endl;
    return 0;
}