/*
******
****** https://codeforces.com/contest/339/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    string s;
    cin >> s;

    for (int x = 0; x < s.length(); x++)
    {
        if (s[x] == '1')
        {
            a++;
        }
        if (s[x] == '2')
        {
            b++;
        }
        if (s[x] == '3')
        {
            c++;
        }
    }

    int test = 0;

    for (int x = 0; x < a; x++)
    {
        if (test == 0)
        {
            cout << "1";
            test = 1;
        }
        else
        {
            cout << "+1";
        }
    }

    for (int x = 0; x < b; x++)
    {
        if (test == 0)
        {
            cout << "2";
            test = 1;
        }
        else
        {
            cout << "+2";
        }
    }

    for (int x = 0; x < c; x++)
    {
        if (test == 0)
        {
            cout << "3";
            test = 1;
        }
        else
        {
            cout << "+3";
        }
    }
}
