/*
******
****** https://codeforces.com/contest/337/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
    return a > b;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> f(m);
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    sort(f.begin(), f.end(), comp);
    int res = INT_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        int ans = f[i] - f[n - 1 + i];
        res = min(res, ans);
    }
    cout << res;
}
