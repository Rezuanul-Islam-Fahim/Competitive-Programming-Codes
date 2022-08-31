/*
******
****** https://codeforces.com/contest/1080/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 28/11/2018
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    cout << (n * 2 + k - 1) / k + (n * 5 + k - 1) / k + (n * 8 + k - 1) / k;
}
