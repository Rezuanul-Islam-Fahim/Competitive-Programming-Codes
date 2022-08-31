/*
******
****** https://codeforces.com/contest/122/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    ostringstream s;
    s << n;
    string st = s.str();

    for (int x = 0; x < st.length(); x++)
    {
        if (st[x] == '4' || st[x] == '7')
        {
            c++;

            if (c == st.length())
            {
                cout << "YES\n";
                return 0;
            }
        }
    }

    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
