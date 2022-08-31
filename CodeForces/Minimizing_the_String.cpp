/*
******
****** https://codeforces.com/contest/1076/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 14/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int pos = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            pos = i;
            break;
        }
    }
    s.erase(pos, 1);
    cout << s;
}
