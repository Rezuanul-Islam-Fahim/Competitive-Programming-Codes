/*
******
****** https://codeforces.com/contest/489/problem/B
******
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a[100], b[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    sort(a, a + n);
    sort(b, b + m);
    int ans = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (abs(a[i] - b[j]) <= 1)
            {
                ans++;
                b[j] = 200;
                break;
            }
        }
    cout << ans;
}
