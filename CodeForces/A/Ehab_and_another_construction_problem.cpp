/*
******
****** https://codeforces.com/contest/1088/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 09/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x == 1)
        cout << -1;
    else
    {
        cout << x - x % 2 << " " << 2;
    }
}
