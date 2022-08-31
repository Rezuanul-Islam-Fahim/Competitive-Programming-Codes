/*
******
****** https://codeforces.com/contest/1068/problem/A
******
*/

/*
    @Author: Rezuanul Islam Fahim
    Date Created: 25/10/2018
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, m, k, l, res;
    cin >> n >> m >> k >> l;
    if (n < m)
        cout << -1;
    else
    {
        res = (k + l + m - 1) / m;
        if (res * m > n)
            res = -1;
        cout << res;
    }
}
