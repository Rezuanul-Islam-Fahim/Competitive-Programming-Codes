/*
******
****** https://codeforces.com/contest/1111/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

int ar[100010];

int main()
{
    long long n, k, m, sum = 0;
    cin >> n >> k >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    sort(ar, ar + n);
    long double mx = (long double)(sum + min(m, n * k)) / (long double)(n);
    for (int i = 0; i < min(n - 1, m); i++)
    {
        sum -= ar[i];
        long double s = (long double)(sum + min(m - i - 1, (n - i - 1) * k)) / (long double)(n - i - 1);
        mx = max(mx, s);
    }
    cout << fixed << setprecision(20) << mx;
}
