/*
******
****** https://codeforces.com/contest/520/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    string s;
    char ch = 'a';
    cin >> n >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(), s.end());

    for (int x = 0; x < n; x++)
    {
        if (s[x] == ch)
        {
            c++;
            ch++;
        }
    }

    if (c == 26)
        cout << "YES";
    else
        cout << "NO";
}
