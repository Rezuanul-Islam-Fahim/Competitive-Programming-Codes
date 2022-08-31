/*
******
****** https://codeforces.com/contest/131/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int counter = 0;

    for (int n = 1; n < s.length(); n++)
    {
        if (s[n] >= 'A' && s[n] <= 'Z')
        {
            counter++;
        }
    }

    if (counter == s.length() - 1)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] += 'A' - 'a';
        }
        else if (s[0] >= 'A' && s[0] <= 'Z')
        {
            s[0] += 'a' - 'A';
        }

        int x = 1;

        while (x < s.length())
        {
            s[x] += 'a' - 'A';
            x++;
        }
    }

    cout << s << "\n";
}
