/*
******
****** https://codeforces.com/contest/41/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    char k;
    int n, m;

    for (n = 0, m = s.length() - 1; n < m; n++, m--)
    {
        k = s[n];
        s[n] = s[m];
        s[m] = k;
    }

    if (s == t)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
