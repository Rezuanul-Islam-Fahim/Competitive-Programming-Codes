/*
******
****** https://codeforces.com/contest/732/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k, a[505];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mw, ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] + a[i - 1] < k)
        {
            mw = k - (a[i] + a[i - 1]);
            ans += mw;
            a[i] += mw;
        }
    }
    cout << ans << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
