/*
******
****** https://codeforces.com/contest/268/problem/A
******
*/

#include <iostream>
using namespace std;

int main()
{
    int n, h[100], a[100], x, y, count = 0;
    cin >> n;

    for (x = 0; x < n; x++)
    {
        cin >> a[x] >> h[x];
        for (y = 0; y < x; y++)
        {
            if (a[x] == h[y])
                count++;
            if (a[y] == h[x])
                count++;
        }
    }

    cout << count;
}
