#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; cin >> a >> b;
    int cnt = 0;
    while (a--){
        int k; cin >> k;
        if (k>b){
            cnt+=2;
        }else cnt+=1;
    }
    cout << cnt << endl;
    return 0;
}