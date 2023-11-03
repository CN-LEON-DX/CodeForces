#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    while (k--){
        int index = 0;
        for (int i =1;i<n;i++){
            if (s[i]=='G' && s[i-1]=='B' && i != index){
                s[i]='B'; s[i-1]='G';
                index = i+1;
            }
        }
    } 
    cout << s << endl;
    return 0;
}