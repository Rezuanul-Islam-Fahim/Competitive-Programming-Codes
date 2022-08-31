/*
******
****** https://codeforces.com/contest/1095/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 28/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char s[60];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i += cnt)
    {
        cnt++;
        cout << s[i];
    }
}
