/*
******
****** https://codeforces.com/contest/379/problem/A
******
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, m, n;
    cin >> a >> b;
    n = a;

    while (a >= b)
    {
        m = a / b;
        n = n + m;
        a = m + (a % b);
    }

    cout << n;
}
