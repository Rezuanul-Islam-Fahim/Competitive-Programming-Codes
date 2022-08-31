/*
******
****** https://codeforces.com/contest/1095/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 28/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 10;
int ar[MAXN];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int ans = min(ar[n - 2] - ar[0], ar[n - 1] - ar[1]);
    cout << ans;
}
