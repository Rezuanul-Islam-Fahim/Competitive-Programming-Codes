/*
******
****** https://codeforces.com/contest/617/problem/A
******
*/

#include <iostream>
using namespace std;

int main()
{
    int x, p, q, r = 0;
    cin >> x;

    p = x / 5;
    q = x % 5;

    if (q % 4 == 0)
    {
        r = q / 4;
    }
    else if (q % 3 == 0)
    {
        r = q / 3;
    }
    else if (q % 2 == 0)
    {
        r = q / 2;
    }
    else
    {
        r = 1;
    }

    cout << p + r;
}
