#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    set<int> se;
    int passengers = 0;
    while (n--){
        int out, in;
        cin >> out >> in;
        passengers = passengers + in - out;
        se.insert(passengers);
    }
    cout << *(se.rbegin()) << endl;
    return 0;
}