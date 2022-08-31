/*
******
****** https://codeforces.com/contest/706/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, m;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
        cin >> t[i];
    sort(t, t + n);
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> m;
        cout << upper_bound(t, t + n, m) - t << "\n";
    }
}
