#include <bits/stdc.h>
using namespace std;
int main(){
    int n; cin >> n;
    set<char> se;
    while (n--){
        char k; cin >> k;
        if (k>='A' && k<='Z') k+=32;
        se.insert(k);
    }
    if (se.size()==26) cout << "YES";
    else cout << "NO";
    return 0;
}