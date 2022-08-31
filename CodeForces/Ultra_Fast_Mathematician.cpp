/*
******
****** https://codeforces.com/contest/61/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n, m;
    cin >> n >> m;
    int x, y;

    for (x = 0, y = 0; x < n.length(), y < m.length(); x++, y++)
    {
        if (n[x] == m[y])
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }
}
