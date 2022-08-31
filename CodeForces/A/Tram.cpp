/*
******
****** https://codeforces.com/contest/116/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, r = 0, t = 0;
    cin >> n;

    for (int x = 0; x < n; x++)
    {
        cin >> a >> b;
        r -= a;
        r += b;

        if (t < r)
        {
            t = r;
        }
    }

    cout << t << "\n";
}
