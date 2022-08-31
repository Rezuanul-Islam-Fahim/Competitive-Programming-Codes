/*
******
****** https://codeforces.com/contest/25/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100], le, lo, c = 0, t = 0;
    cin >> n;

    for (int x = 1; x <= n; x++)
    {
        cin >> a[x];
        if (a[x] % 2 == 0)
        {
            c++;
            le = x;
        }
        else
        {
            t++;
            lo = x;
        }
    }

    cout << (t < c ? lo : le);
}
