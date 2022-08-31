/*
******
****** https://codeforces.com/contest/711/problem/A
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
    string s[1010];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i][0] == 'O' && s[i][1] == 'O')
        {
            s[i][0] = s[i][1] = '+';
            flag = true;
            break;
        }
        else if (s[i][3] == 'O' && s[i][4] == 'O')
        {
            s[i][3] = s[i][4] = '+';
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << "\n";
        }
    }
    else
        cout << "NO";
}
