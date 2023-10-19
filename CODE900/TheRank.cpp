#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int i = 1;
    map<int, int> mp;
    int a, b, c, d; cin >> a >> b >> c >> d;
    int score_smith = a+b+c+d;
    n--;
    while(n--){
        cin >> a >> b >> c >> d;
        int sum = a + b + c + d;
        if (sum>score_smith) i++;
    }
    cout << i << endl;
    return 0;
}