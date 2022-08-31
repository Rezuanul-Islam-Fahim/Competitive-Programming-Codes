/*
******
****** https://codeforces.com/contest/266/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    char r[n];

    for (int x = 0; x < n; x++)
    {
        cin >> r[x];
    }

    for (int x = 0; x < n - 1; x++)
    {
        if (r[x] == r[x + 1])
        {
            counter++;
        }
    }

    cout << counter << "\n";
}
