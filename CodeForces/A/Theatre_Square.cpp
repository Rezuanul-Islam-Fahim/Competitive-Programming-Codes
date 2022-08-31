/*
******
****** https://codeforces.com/contest/1/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    long long flagsrow;

    if (n % a == 0)
    {
        flagsrow = n / a;
    }
    else
    {
        flagsrow = n / a;
        flagsrow++;
    }

    long long flagscolumn;

    if (m % a == 0)
    {
        flagscolumn = m / a;
    }
    else
    {
        flagscolumn = m / a;
        flagscolumn++;
    }

    cout << flagsrow * flagscolumn << "\n";
}
