#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, max_k, w; cin >> k >> max_k >> w;
    int numof = 0;
    for (int i = 1;i<=w;i++){
        numof+= i;
    }
    if (k*numof>max_k){
        cout << k*numof- max_k << endl;
    }else cout << 0 << endl;
    return 0;
}