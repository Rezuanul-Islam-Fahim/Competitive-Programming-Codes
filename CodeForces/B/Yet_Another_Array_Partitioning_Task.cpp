/*
******
****** https://codeforces.com/contest/1114/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define LL long long

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<pii> vp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vp[i].first;
        vp[i].second = i;
    }
    sort(vp.begin(), vp.end());
    reverse(vp.begin(), vp.end());
    vector<int> ind(m * k);
    LL sum = 0;
    for (int i = 0; i < m * k; i++)
    {
        sum += vp[i].first;
        ind[i] = vp[i].second;
    }
    cout << sum << "\n";
    sort(ind.begin(), ind.end());
    for (int i = 0; i < k - 1; i++)
    {
        cout << ind[(i + 1) * m - 1] + 1 << " ";
    }
}
