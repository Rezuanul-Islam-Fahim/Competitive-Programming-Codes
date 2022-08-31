/*
******
****** https://codeforces.com/contest/1088/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 08/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 10;
int ar[MAXN];

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    vector<int> dist;
    dist.push_back(0);
    for (int i = 0; i < n; i++)
    {
        if (ar[i] != ar[i + 1])
        {
            dist.push_back(ar[i]);
        }
    }
    for (int i = 1; i <= k; i++)
    {
        if (i <= dist.size() - 1)
        {
            cout << dist[i] - dist[i - 1] << "\n";
        }
        else
            cout << 0 << "\n";
    }
}
