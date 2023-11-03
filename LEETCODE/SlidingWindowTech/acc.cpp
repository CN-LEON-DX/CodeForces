// Source: https://usaco.guide/general/io
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define For(dl, i, a, b) for (dl i = a; i<b; i++)


bool check(string str){
    for (int i = 0;i<str.size()-1;i++){
        if (str[i] == str[i+1]){
            return false;
        }
    }
    return true;
}
int x, y;
bool slove(){
    cin >> x >> y;
    char a[x], b[y];
    for (char &i : a) cin >> i;
    for (char &i : b) cin >> i;
    string s(a, a+x);
    string s1(b, b+y);
    if (check(s+s1)) return 1;
    if (check(s1+s)) return 1;
    for (int i = 0;i<x;i++){
        string temp = s.substr(0, i);
        temp += s1; temp += s.substr(i+1, x);
        if (check(temp) && !temp.empty()){
            return 1;
        }
    }
    return 0;
}

int main(){
    int test; cin >> test;
    while (test--) slove() ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
