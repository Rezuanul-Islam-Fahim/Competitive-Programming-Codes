/*
******
****** https://codeforces.com/contest/705/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 08/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

string s1 = "I hate ";
string s2 = "I love ";

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
            cout << s1;
        else
            cout << s2;
        if (i < n)
            cout << "that ";
        else
            cout << "it";
    }
}
