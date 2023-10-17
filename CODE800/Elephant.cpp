#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int cnt  = 0;
    cnt += n/5;
    n%=5;
    cnt+= n/4;
    n%=4;
    cnt+=n/3;
    n%=3;
    cnt+=n/2;
    n%=2;
    cnt+=n;
    cout << cnt << endl;
    return 0;
}