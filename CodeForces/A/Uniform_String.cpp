/*
******
****** https://codeforces.com/contest/1092/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 28/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, cnt = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cout << char('a' + cnt);
            if (cnt == k - 1)
                cnt = -1;
            cnt++;
        }
        cout << "\n";
    }
}
