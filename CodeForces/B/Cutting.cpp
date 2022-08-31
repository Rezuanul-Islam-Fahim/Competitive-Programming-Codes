/*
******
****** https://codeforces.com/contest/998/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 02/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
const int MAXN = 110;
int ar[MAXN];
vector<int> cost;

int main()
{
    int n, b;
    cin >> n >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i] % 2)
            odd++;
        else
            even++;
        if (odd == even)
        {
            cost.pb(abs(ar[i] - ar[i + 1]));
        }
    }
    sort(cost.begin(), cost.end());
    int ans = 0;
    for (int i = 0; i < cost.size(); i++)
    {
        if (cost[i] <= b)
        {
            ans++;
            b -= cost[i];
        }
    }
    cout << ans;
}
