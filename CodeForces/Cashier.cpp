/*
******
****** https://codeforces.com/contest/1059/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, a;
    cin >> n >> l >> a;
    int ans = 0, prev = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        ans += (x - prev) / a;
        prev = x + y;
    }
    ans += (l - prev) / a;
    cout << ans;
}
