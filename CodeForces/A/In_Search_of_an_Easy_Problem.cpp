/*
******
****** https://codeforces.com/contest/1030/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 07/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "HARD";
    else
        cout << "EASY";
}
