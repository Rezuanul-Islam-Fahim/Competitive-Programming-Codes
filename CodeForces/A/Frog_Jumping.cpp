/*
******
****** https://codeforces.com/contest/1077/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 16/11/2018
 **/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        if (k % 2)
        {
            ll n = (k / 2) + 1;
            cout << n * a - ((n - 1) * b) << "\n";
        }
        else
        {
            ll n = k / 2;
            cout << (n * a) - (n * b) << "\n";
        }
    }
}
