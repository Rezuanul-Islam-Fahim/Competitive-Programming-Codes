/*
******
****** https://codeforces.com/contest/118/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int n = 0; n < s.size(); n++)
    {
        if (s[n] >= 'A' && s[n] <= 'Z')
        {
            s[n] += 'a' - 'A';
        }

        if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' || s[n] == 'y')
        {
            continue;
        }

        else
        {
            cout << '.' << s[n];
        }
    }
}
