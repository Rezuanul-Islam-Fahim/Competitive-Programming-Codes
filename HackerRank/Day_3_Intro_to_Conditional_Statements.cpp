/* 
******
****** https://www.hackerrank.com/challenges/30-conditional-statements/problem
******
*/

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << "Weird";
    }
    else {
        if ((n >= 2 && n <= 5) || n > 20) {
            cout << "Not Weird";
        }
        else {
            cout << "Weird";
        }
    }

    return 0;
}
