/*
******
****** https://codeforces.com/contest/271/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d;
    cin >> n;

    while (true)
    {
        n++;
        a = n / 1000 % 10;
        b = n / 100 % 10;
        c = n / 10 % 10;
        d = n % 10;

        if (a != b && b != c && c != d && b != d && c != a && a != d)
        {
            cout << a << b << c << d;
            break;
        }
    }
}
