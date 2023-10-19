#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int s[n][m];
    int a[n][m];
    for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++) cin >> a[i][j];
    for (int i=1;i<=n;i++)
    for (int j=1;j<=m;j++)
    {
        s[i][j] = s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
    }
    int test; cin >> test;
    while (test--){
        int i, j, k, h; cin >> i >> j >> k >> h;
        cout << s[k][h] - s[k][j-1] - s[i-1][h]+s[i-1][j-1] << endl;
    }
    return 0;
}

// Test
// Input
// 4 5
// 2 3 4 2 3
// 4 1 2 3 4
// 5 4 3 6 2
// 3 1 2 4 8
// 3
// 1 1 4 5
// 2 3 4 4
// 3 1 3 4
// output
// 66
// 20 
// 18
