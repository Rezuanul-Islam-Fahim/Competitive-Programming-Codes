/*
******
****** https://codeforces.com/contest/231/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, counter = 0;
    cin >> n;

    for (int x = 0; x < n; x++)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            counter++;
        }
    }
    cout << counter << "\n";
}
