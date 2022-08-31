/*
******
****** https://codeforces.com/contest/230/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int maxn = 1000 + 10;
    pair<int, int> pii[maxn];
    int s, n;
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> pii[i].first >> pii[i].second;
    }
    sort(pii, pii + n);
    bool x = true;
    for (int i = 0; i < n; i++)
    {
        if (s > pii[i].first)
            s += pii[i].second;
        else
        {
            x = false;
            break;
        }
    }
    if (x)
        cout << "YES";
    else
        cout << "NO";
}
