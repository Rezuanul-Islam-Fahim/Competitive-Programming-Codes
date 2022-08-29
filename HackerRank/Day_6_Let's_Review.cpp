/* 
******
****** https://www.hackerrank.com/challenges/30-review-loop/problem
******
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i += 2)
            cout << s[i];
        cout << " ";
        for (int i = 1; i < s.length(); i += 2)
            cout << s[i];
        cout << "\n";
    }
}
