#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if (n%4!=0) cout << "===";
    else{
        string s; cin >> s;
        map<char, int> mp;
        mp['A']=n/4;
        mp['T']=n/4;
        mp['C']=n/4;
        mp['G']=n/4;
        for (char x : s){
        	if (x!='?'){
        		if (mp[x]>0) mp[x]--;
	        	else {
	        		cout << "===";
	        		return 0;
				}
			}
		}
        for (char &x : s){
            if (x=='?') {
                for (auto &i : mp){
                    if (i.second!=0){
                        x=i.first;
                        i.second--;
                        break;
                    }
                }
            }
        }
        cout << s;
    }
    return 0;
}