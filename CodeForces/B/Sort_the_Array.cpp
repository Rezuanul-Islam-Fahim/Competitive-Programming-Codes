/*
******
****** https://codeforces.com/contest/451/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N], b[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[b[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = mp[a[i]];
    }
    int l = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i)
        {
            l = i;
            break;
        }
    }
    int r = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != i)
        {
            r = i;
            break;
        }
    }
    if (l == -1 || r == -1)
        cout << "yes\n"
             << 1 << " " << 1;
    else
    {
        bool srtd = true;
        reverse(a + l, a + r + 1);
        for (int i = 0; i < n; i++)
        {
            if (a[i] != i)
                srtd = false;
        }
        if (srtd)
            cout << "yes\n"
                 << l + 1 << " " << r + 1;
        else
            cout << "no";
    }
}
