/*
******
****** https://codeforces.com/contest/1076/problem/C
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 13/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

void solve_eqn(int d)
{
    int D = d * (d - 4);
    cout << fixed << setprecision(9);
    if (D < 0)
        cout << "N\n";
    else
    {
        double A = (d + sqrt(D)) / 2.0;
        double B = d - A;
        cout << "Y " << A << " " << B << "\n";
    }
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int d;
        cin >> d;
        solve_eqn(d);
    }
}
