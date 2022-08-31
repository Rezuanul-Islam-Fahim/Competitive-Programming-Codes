/*
******
****** https://codeforces.com/contest/1077/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 16/11/2018
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(NULL);
    int n, ar[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (ar[i] == 0 && ar[i - 1] == 1 && ar[i + 1] == 1)
        {
            ans++;
            ar[i - 1] = ar[i + 1] = 0;
        }
    }
    cout << ans;
}
