/*
******
****** https://codeforces.com/contest/1075/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 14/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
    LL n, x, y;
    cin >> n >> x >> y;
    LL k1 = max(x - 1, y - 1);
    LL k2 = max(n - x, n - y);
    if (k1 <= k2)
        cout << "White";
    else
        cout << "Black";
}
