/*
******
****** https://codeforces.com/contest/1076/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 18/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

long long get(long long n)
{
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main()
{
    long long n;
    int cnt = 0;
    cin >> n;
    if (n % 2)
    {
        n -= get(n);
        cnt++;
    }
    cout << cnt + n / 2;
}
