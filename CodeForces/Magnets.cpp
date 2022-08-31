/*
******
****** https://codeforces.com/contest/344/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, groups(0);
    cin >> n;

    char s[3], c('\0');
    while (n--)
    {
        cin >> s;
        if (s[0] != c)
        {
            groups += 1;
        }
        c = s[0];
    }

    cout << groups;
}
