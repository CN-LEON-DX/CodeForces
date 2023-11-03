#include <bits/stdc++.h>
using namespace std;
#define For(dl, i, a, b) for (dl i = a; i<b; i++)
int main(){
    // Testcase:
    // Solution 1:
    // if n <= 3 it is impossible cus maximum number can form is 9 = (1+2)*3

    // else if n = 4 cout << 2 * 3 * 4 = 24 
    // else if n = 5 cout <<  (5 - 3) * 4 * (2 + 1) = 24
    // else n > 5 we can simply add n - (n-1) = 1, 24 * 1 = 24
    // assum n = 7 chose 6 distinct pair
    // => 7 - 6 = 1
    // => 6 - 5 = 1
    // 2 * 3 = 6
    // 6 * 4 = 24
    //  24 * 1 = 24
    // 24 * 1 = 24
    int n; cin >> n;
    if (n<=3){
        cout << "NO";
    }else if (n==4 || n==5){
        cout << "YES\n";
        if (n==4){
            cout << "1 * 2 = 2\n2 * 3 = 6\n6 * 4 = 24";
        }else cout << "5 - 3 = 2\n2 * 4 = 8\n1 + 2 = 3\n8 * 3 = 24";// (5-3)*4*(1+2) = 24
    }else {
        cout << "YES\n";
        int time = n - 5;
        if (n>6) time--; 
        while (n>=6){
            cout << n<< " - " << n-1 << " = 1"<< endl;
            n--;
        }
        cout << "1 * 2 = 2"<< endl;
        cout << "2 * 3 = 6" << endl;
        cout << "6 * 4 = 24" << endl;
        cout << "24 * 1 = 24\n";
    }
    return 0;
}



// A. 24 Game
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Little X used to play a card game called "24 Game", but recently he has found it too easy. So he invented a new game.
// Initially you have a sequence of n integers: 1, 2, ..., n. In a single step, you can pick two of them, let's denote them a and b, erase them from the sequence, and append to the sequence either a + b, or a - b, or a × b.
// After n - 1 steps there is only one number left. Can you make this number equal to 24?

// Input
// The first line contains a single integer n (1 ≤ n ≤ 105).

// Output
// If it's possible, print "YES" in the first line. Otherwise, print "NO" (without the quotes).

// If there is a way to obtain 24 as the result number, in the following n - 1 lines print the required operations an operation per line. Each operation should be in form: "a op b = c". Where a and b are the numbers you've picked at this operation; op is either "+", or "-", or "*"; c is the result of corresponding operation. Note, that the absolute value of c mustn't be greater than 1018. The result of the last operation must be equal to 24. Separate operator sign and equality sign from numbers with spaces.

// If there are multiple valid answers, you may print any of them.

// Examples
// inputCopy
// 1
// outputCopy
// NO
// inputCopy
// 8
// outputCopy
// YES
// 8 * 7 = 56
// 6 * 5 = 30
// 3 - 4 = -1
// 1 - 2 = -1
// 30 - -1 = 31
// 56 - 31 = 25
// 25 + -1 = 24