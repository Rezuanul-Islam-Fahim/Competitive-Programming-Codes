/*
******
****** https://codeforces.com/contest/1110/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 07/02/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, ar[100010];
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    long long ans = ar[n - 1] - ar[0] + 1;
    vector<int> V;
    for (int i = 1; i < n; i++)
    {
        V.push_back(ar[i] - ar[i - 1]);
    }
    sort(V.begin(), V.end());
    reverse(V.begin(), V.end());
    for (int i = 0; i < k - 1; i++)
    {
        ans -= V[i] - 1;
    }
    cout << ans;
}
