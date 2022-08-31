/*
******
****** https://codeforces.com/contest/136/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 08/02/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a[x] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}
