/*
******
****** https://codeforces.com/contest/69/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, k = 0, m = 0, l = 0, o = 0;
    cin >> n;

    while (k < n)
    {
        cin >> a >> b >> c;
        m += a;
        l += b;
        o += c;
        k++;
    }

    if (m == 0 && l == 0 && o == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
