/*
******
****** https://codeforces.com/contest/208/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, c = "";
    char t = 'y';
    getline(cin, s);

    for (int n = 0; n < s.length(); n++)
    {
        if (s[n] == 'W' && s[n + 1] == 'U' && s[n + 2] == 'B')
        {
            n += 2;

            if (t != 'y')
            {
                c += " ";
            }
        }
        else
        {
            t = 'j';
            c += s[n];
        }
    }

    cout << c << "\n";
}
