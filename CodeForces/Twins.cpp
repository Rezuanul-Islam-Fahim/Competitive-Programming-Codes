/*
******
****** https://codeforces.com/contest/160/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100], total = 0, ans = 0, c = 0;
    cin >> n;

    for (int x = 0; x < n; x++)
    {
        cin >> a[x];
        total += a[x];
    }

    total = (total / 2) + 1;
    sort(a, a + n);

    while (ans < total)
    {
        c++;
        ans += a[n - c];
    }

    cout << c << "\n";
}
