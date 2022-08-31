/*
******
****** https://codeforces.com/contest/1097/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 09/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    bool flag = false;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s1[0] == s2[i] || s1[1] == s2[i])
            flag = true;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}
