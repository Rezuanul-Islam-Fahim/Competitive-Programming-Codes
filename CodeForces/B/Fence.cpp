/*
******
****** https://codeforces.com/contest/363/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 01/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1.5e5 + 10;
int ar[MAXN];

int main()
{
    int n, k, sum;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0, sum = 0; i < k; i++)
    {
        sum += ar[i];
    }
    int total = sum, ans = 1;
    for (int i = 0, j = k; j < n; j++, i++)
    {
        sum -= ar[i];
        sum += ar[j];
        if (sum < total)
        {
            total = sum;
            ans = i + 2;
        }
    }
    cout << ans;
}
