/*
******
****** https://codeforces.com/contest/158/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = n - 1, k = 0; k <= i; i--)
    {
        ans++;
        m = 4 - a[i];
        while (m >= a[k])
        {
            m -= a[k];
            k++;
        }
    }
    cout << ans;
}
