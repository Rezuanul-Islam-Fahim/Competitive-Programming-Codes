/*
******
****** https://codeforces.com/contest/791/problem/A
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
    int a, b, ans = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        ans++;
    }
    cout << ans;
}
