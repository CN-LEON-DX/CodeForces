#include <bits/stdc++.h>
using namespace std;
int main(){
    double a, b; cin >> a >> b;
    int cnt = 1;
    while (a*3 <= b*2){
        cnt++;
        a*=3;
        b*=2;
    }
    cout << cnt << endl;
    return 0;
}