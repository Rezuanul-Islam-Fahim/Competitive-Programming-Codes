/*
******
****** https://codeforces.com/contest/1093/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 19/12/2018
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> chk;
        for (int i = 0; i < s.length(); i++)
        {
            chk.insert(s[i]);
        }
        if (chk.size() == 1)
            cout << -1 << '\n';
        else
        {
            sort(s.begin(), s.end());
            cout << s << '\n';
        }
    }
}
