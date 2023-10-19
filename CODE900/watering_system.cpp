#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    sort(arr.begin()+1, arr.end());
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int cnt = 0;
    double a1 = a;
    while (a1*arr[0] < b*sum) {
        if (n-1-cnt<=0) break;
        cnt++;
        sum -= arr[n-1-cnt];
    }

    cout << cnt << endl;

    return 0;
}
