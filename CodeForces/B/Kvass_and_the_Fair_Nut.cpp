/*
******
****** https://codeforces.com/contest/1084/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 14/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int MAXN = 1e3 + 10;
int ar[MAXN];

int main()
{
    LL n, s, sum = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    sort(ar, ar + n);
    if (sum < s)
        cout << -1;
    else
    {
        LL got = 0, mn = ar[0];
        for (int i = 0; i < n; i++)
        {
            got += ar[i] - mn;
        }
        if (s <= got)
            cout << mn;
        else
        {
            LL need = s - got;
            LL give = (need - 1) / n + 1;
            cout << mn - give;
        }
    }
}
