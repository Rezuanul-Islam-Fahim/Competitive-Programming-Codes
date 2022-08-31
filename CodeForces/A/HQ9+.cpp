/*
******
****** https://codeforces.com/contest/133/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;

    for (int n = 0; n < p.length(); n++)
    {
        if (p[n] == 'H' || p[n] == 'Q' || p[n] == '9')
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
}
