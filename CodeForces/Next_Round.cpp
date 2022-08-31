/*
******
****** https://codeforces.com/contest/158/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a[100], c = 0;
    cin >> n >> k;

    for (int x = 0; x < n; x++)
    {
        cin >> a[x];
    }

    for (int x = 0; x < n; x++)
    {
        if (a[x] >= a[k - 1] && a[x] != 0)
        {
            c++;
        }
    }

    cout << c << "\n";
}
