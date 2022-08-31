/*
******
****** https://codeforces.com/contest/443/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, l;
    char ch = '\0';
    int c = 0;
    getline(cin, s);

    for (int x = 1; x < s.length(); x += 3)
    {
        if (isalpha(s[x]))
        {
            l += s[x];
        }
    }

    sort(l.begin(), l.end());

    for (int x = 0; x < l.length(); x++)
    {
        if (ch != l[x])
            c++;
        ch = l[x];
    }

    cout << c;
}
