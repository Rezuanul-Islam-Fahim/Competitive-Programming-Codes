/*
******
****** https://codeforces.com/contest/110/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, c = 0;
    cin >> n;

    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            c++;
        }
        n /= 10;
    }

    if (c == 4 || c == 7)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
