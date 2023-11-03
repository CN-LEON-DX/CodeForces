#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n,a,b,total=0;
    vector<ll> s;
    cin>>n>>a>>b;
    for(ll i=0,temp;i<n;i++)
    {
        cin>>temp;
        s.emplace_back(temp);
        total+=temp;
    }
    sort(s.begin()+1,s.end(),greater<ll> ());
    if((a*s[0])/total>=b)
    {
        cout<<0<<endl;
        return 0;
    }
    for(ll i=1;i<n;i++)
    {

        total-=s[i];
        if((a*s[0])/total>=b)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
