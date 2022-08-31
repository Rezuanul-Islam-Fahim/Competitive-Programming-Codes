/*
******
****** https://codeforces.com/contest/1068/problem/B
******
*/

/*
    @Author: Rezuanul Islam Fahim
    Date Created: 26/10/2018
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll> v;

int main()
{
    ll n;
    cin >> n;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i * i != n)
            {
                v.push_back(n / i);
            }
        }
    }
    cout << v.size();
}
