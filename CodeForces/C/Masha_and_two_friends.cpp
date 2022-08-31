/*
******
****** https://codeforces.com/contest/1080/problem/C
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 04/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll white_count(ll x1, ll y1, ll x2, ll y2)
{
    ll col = (x2 - x1 + 1) / 2;
    ll _col = 1 + (x2 - x1 + 1) / 2;
    ll row = (y2 - y1 + 1) / 2;
    ll _row = 1 + (y2 - y1 + 1) / 2;
    if ((x2 - x1 + 1) % 2)
    {
        if ((y2 - y1 + 1) % 2)
        {
            if (x1 % 2 == y1 % 2)
            {
                return _col * _row + col * row;
            }
            else
                return _col * row + col * _row;
        }
        else
            return col * row + _col * row;
    }
    else
        return col * (y2 - y1 + 1);
}

ll black_count(ll x1, ll y1, ll x2, ll y2)
{
    ll area = (x2 - x1 + 1) * (y2 - y1 + 1);
    return area - white_count(x1, y1, x2, y2);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, W, B;
        cin >> n >> m;
        W = white_count(1, 1, n, m);
        B = black_count(1, 1, n, m);
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        W += black_count(x1, y1, x2, y2);
        B -= black_count(x1, y1, x2, y2);
        ll x3, y3, x4, y4;
        cin >> x3 >> y3 >> x4 >> y4;
        W -= white_count(x3, y3, x4, y4);
        B += white_count(x3, y3, x4, y4);
        ll x5, y5, x6, y6;
        x5 = max(x1, x3);
        y5 = max(y1, y3);
        x6 = min(x2, x4);
        y6 = min(y2, y4);
        if (x5 <= x6 && y5 <= y6)
        {
            W -= black_count(x5, y5, x6, y6);
            B += black_count(x5, y5, x6, y6);
        }
        cout << W << " " << B << " \n";
    }
}
