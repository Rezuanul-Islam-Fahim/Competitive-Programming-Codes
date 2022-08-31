/*
******
****** https://codeforces.com/contest/1077/problem/C
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 21/11/2018
 **/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
const int MAXN = 2e5 + 10;
ll ar[MAXN];

int main()
{
    int n;
    ll mx1 = 0, mx2 = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (mx1 <= ar[i])
        {
            mx2 = mx1;
            mx1 = ar[i];
        }
        else if (mx2 < ar[i])
            mx2 = ar[i];
        sum += ar[i];
    }
    vector<int> sol;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == mx1 && sum - ar[i] - mx2 == mx2)
        {
            sol.pb(i + 1);
        }
        else if (ar[i] != mx1 && sum - ar[i] - mx1 == mx1)
        {
            sol.pb(i + 1);
        }
    }
    cout << sol.size() << "\n";
    for (int i = 0; i < sol.size(); i++)
    {
        cout << sol[i] << " ";
    }
}
