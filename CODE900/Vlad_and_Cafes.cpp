#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n]; 
    map<int, int> mp;
    for (int i = 0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    int numdif = mp.size();
    for (int i =n-1;i>=0;i--){
        if (numdif==1){
            break;
        }
        if (mp[a[i]]) {
            mp[a[i]]=0;
            numdif--;
        }
    }
    for (auto x : mp){
        if (x.second) {
            cout << x.first;
            break;
        }
    }
    return 0;
}