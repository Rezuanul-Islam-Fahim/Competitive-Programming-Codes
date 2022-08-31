/*
******
****** https://codeforces.com/contest/1060/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num8 = 0;
    cin >> n;
    char s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == '8')
            num8++;
    }
    if (n >= 11)
    {
        cout << min(n / 11, num8);
    }
    else
        cout << 0;
}
