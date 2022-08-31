/*
******
****** https://codeforces.com/contest/935/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 09/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            ans++;
    }
    cout << ans;
}
