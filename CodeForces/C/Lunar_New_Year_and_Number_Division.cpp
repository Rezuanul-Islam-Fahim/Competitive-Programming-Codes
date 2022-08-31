/*
******
****** https://codeforces.com/contest/1106/problem/C
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 31/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3e5 + 10;
int ar[MAXN];

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    long long ans = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        ans += pow(ar[i] + ar[j], 2);
    }
    cout << ans;
}
