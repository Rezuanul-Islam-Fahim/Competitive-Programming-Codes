/*
******
****** https://codeforces.com/contest/546/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, total = 0, increamenter = 2;
    cin >> k >> n >> w;
    int y = k;

    for (int x = 0; x < w; x++)
    {
        total += y;
        y = k * increamenter;
        increamenter++;
    }

    if (total > n)
    {
        cout << total - n << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}
