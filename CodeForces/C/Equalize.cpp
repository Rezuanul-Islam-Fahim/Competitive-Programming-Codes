/*
******
****** https://codeforces.com/contest/1037/problem/C
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 02/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            ans++;
            if (a[i] != a[i + 1] && a[i] != b[i] && b[i] != b[i + 1])
            {
                i++;
            }
        }
    }
    cout << ans;
}
