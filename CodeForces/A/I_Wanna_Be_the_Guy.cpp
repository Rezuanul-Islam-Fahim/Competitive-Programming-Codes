/*
******
****** https://codeforces.com/contest/469/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, s, t, j, a[2000], o = 1, c = 0;
    cin >> n >> p;

    for (s = 0; s < p; s++)
    {
        cin >> a[s];
    }

    cin >> q;
    t = s;
    for (j = 0; j < q; j++)
    {
        cin >> a[t];
        t++;
    }

    sort(a, a + t);

    for (int f = 0; f < t; f++)
    {
        if (a[f] == o)
        {
            c++;
            o++;
        }
    }

    if (c == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}
