/*
******
****** https://codeforces.com/contest/263/problem/A
******
*/

#include <iostream>
using namespace std;

int max(int x, int y)
{
    if (x < y)
        return y;
    else
        return x;
}

int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}

int main()
{
    int a[6][6], m, n, x, y;

    for (x = 1; x <= 5; x++)
        for (y = 1; y <= 5; y++)
        {
            cin >> a[x][y];
            if (a[x][y] == 1)
            {
                m = max(3, x) - min(3, x);
                n = max(3, y) - min(3, y);
            }
        }

    cout << m + n;
}
