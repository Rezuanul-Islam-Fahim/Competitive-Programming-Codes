/*
******
****** https://codeforces.com/contest/1063/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 30/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    sort(s, s + n);
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }
}
