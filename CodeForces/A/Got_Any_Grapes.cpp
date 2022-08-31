/*
******
****** https://codeforces.com/contest/1114/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(0), cin.tie(0);
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    if (a < x)
    {
        cout << "NO";
    }
    else
    {
        a -= x;
        if (a + b < y)
        {
            cout << "NO";
        }
        else
        {
            int rem = a + b;
            rem -= y;
            rem += c;
            if (rem < z)
                cout << "NO";
            else
                cout << "YES";
        }
    }
}
