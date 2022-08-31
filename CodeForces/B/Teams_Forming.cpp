/*
******
****** https://codeforces.com/contest/1092/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 19/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ar[110];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int ans = 0;
    for (int i = 0; i < n - 1; i += 2)
    {
        ans += abs(ar[i] - ar[i + 1]);
    }
    cout << ans;
}
