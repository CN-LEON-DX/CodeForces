
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string a; cin >> a;
    int odd = 0, even = 0;
    for (char x : a){
        if (x>='A' && x <='Z'){
            odd++;
        }else even++;
    }
    if (odd > even){
        for (char &x : a){
            x = toupper(x);
        }
    }else {
        for (char &x : a){
            x = tolower(x);
        }
    }
    for (char x : a) cout << x;
    return 0;
}
