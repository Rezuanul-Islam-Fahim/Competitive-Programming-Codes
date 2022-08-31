/*
******
****** https://codeforces.com/contest/888/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 31/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
            x--;
        else if (s[i] == 'R')
            x++;
        else if (s[i] == 'U')
            y++;
        else
            y--;
    }
    cout << n - (abs(x) + abs(y));
}
