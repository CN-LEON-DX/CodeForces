#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    while (n--){
        string s; cin >> s;
        for (char &x : s){
            x = toupper(x);
        }
        if (s=="YES"){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }
    return 0;
}