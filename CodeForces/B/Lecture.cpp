/*
******
****** https://codeforces.com/contest/499/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, string> mp;
    int n, m;
    string a, b;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        if (a.length() <= b.length())
            mp[a] = a;
        else
            mp[a] = b;
    }
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cout << mp[s] << " ";
    }
}
