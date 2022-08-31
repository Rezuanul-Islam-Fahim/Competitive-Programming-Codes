/*
******
****** https://codeforces.com/contest/1106/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 31/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 510;
string s[MAXN];

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (s[i][j] == 'X')
            {
                if (s[i - 1][j - 1] == 'X' && s[i - 1][j + 1] == 'X' && s[i + 1][j - 1] == 'X' && s[i + 1][j + 1] == 'X')
                    ans++;
            }
        }
    }
    cout << ans;
}
