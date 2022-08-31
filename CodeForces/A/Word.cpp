/*
******
****** https://codeforces.com/contest/59/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = 0, b = 0;

    for (int x = 0; x < s.length(); x++)
    {
        if (s[x] >= 'a' && s[x] <= 'z')
            a++;
        else if (s[x] >= 'A' && s[x] <= 'Z')
            b++;
    }

    for (int x = 0; x < s.length(); x++)
    {
        if (a >= b)
        {
            if (s[x] >= 'A' && s[x] <= 'Z')
            {
                s[x] += 'a' - 'A';
            }
        }
        else
        {
            if (s[x] >= 'a' && s[x] <= 'z')
            {
                s[x] += 'A' - 'a';
            }
        }
    }

    cout << s;
}
