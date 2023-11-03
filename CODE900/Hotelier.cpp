#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<char> a(10, '0');
    while (n--){
        char k; cin >> k;
        int index;
        if (k=='R'){
            for (int i=9;i>=0;i--){
                if (a[i]=='0'){
                    a[i]='1';
                    break;
                }
            }
        }else if(k=='L'){
            for (int i=0;i<=9;i++){
                if (a[i]=='0'){
                    a[i]='1';
                    break;
                }
            }
        }else{
            index = k-'0';
            a[index]='0';
        }
    }
    for (char x : a) cout << x;
    return 0;
}