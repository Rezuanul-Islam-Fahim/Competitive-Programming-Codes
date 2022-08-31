/*
******
****** https://codeforces.com/contest/1110/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 08/02/2019
 **/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 10;
int ar[MAXN];

int main()
{
    int b, k;
    cin >> b >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> ar[i];
    }
    int sum = 0, pw = 1;
    for (int i = k - 1; i >= 0; i--)
    {
        sum = (sum + ar[i] * pw) % 2;
        pw = (pw * b) % 2;
    }
    cout << (sum & 1 ? "odd" : "even");
}
