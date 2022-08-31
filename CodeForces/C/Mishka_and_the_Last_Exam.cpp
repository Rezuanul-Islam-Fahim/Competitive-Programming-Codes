/*
******
****** https://codeforces.com/contest/1093/problem/C
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 21/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

long long INF = 2e18;
const int MAXN = 2e5 + 10;
long long ar1[MAXN], ar2[MAXN / 2];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        cin >> ar2[i];
    }
    long long last = INF;
    for (int i = 1; i <= n / 2; i++)
    {
        long long mn = ar2[i] - min(last, ar2[i]);
        mn = max(mn, ar1[i - 1]);
        ar1[i] = mn;
        ar1[n - i + 1] = ar2[i] - mn;
        last = ar1[n - i + 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ar1[i] << " ";
    }
}
