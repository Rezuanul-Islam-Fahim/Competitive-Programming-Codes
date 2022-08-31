/*
******
****** https://codeforces.com/contest/460/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, t, s;
    cin >> n >> m;
    k = n;

    while (n >= m)
    {
        t = n / m;
        k = k + t;
        s = n % m;
        n = t + s;
    }

    cout << k;
}
