/*
******
****** https://codeforces.com/contest/520/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    while (n != m)
    {
        if (n < m)
        {
            if (m % 2 == 0)
                m /= 2, ans++;
            else
                m++, ans++;
        }
        else
        {
            ans++;
            n--;
        }
    }
    cout << ans;
}
