/*
******
****** https://codeforces.com/contest/1080/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 08/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

long long inc(int x)
{
    if (x % 2)
    {
        return -x + inc(x - 1);
    }
    else
        return x / 2;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << inc(r) - inc(l - 1) << "\n";
    }
}
