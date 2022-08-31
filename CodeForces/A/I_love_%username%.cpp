/*
******
****** https://codeforces.com/contest/155/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, min = 999999, max = -1, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (p < min)
        {
            if (i > 0)
                ans++;
            min = p;
        }
        if (p > max)
        {
            if (i > 0)
                ans++;
            max = p;
        }
    }
    cout << ans;
}
