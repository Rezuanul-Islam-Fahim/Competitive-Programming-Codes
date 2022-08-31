/*
******
****** https://codeforces.com/contest/141/problem/A
******
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    d = a + b;

    sort(d.begin(), d.end());
    sort(c.begin(), c.end());

    if (c == d)
        cout << "YES";
    else
        cout << "NO";
}
