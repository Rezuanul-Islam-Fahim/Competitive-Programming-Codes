/*
******
****** https://codeforces.com/contest/977/problem/A
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
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10)
            n -= 1;
        else
            n /= 10;
    }
    cout << n;
}
