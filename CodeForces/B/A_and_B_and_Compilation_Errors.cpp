/*
******
****** https://codeforces.com/contest/519/problem/B
******
*/

#include <iostream>
#include <algorithm>
using namespace std;

const int N = 100000;

int main()
{
    int n, a[N], b[N], c[N], n1, n2;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n - 2; i++)
    {
        cin >> c[i];
    }

    sort(a, a + n);
    sort(b, b + n - 1);
    sort(c, c + n - 2);

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            n1 = a[i];
            break;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] != c[i])
        {
            n2 = b[i];
            break;
        }
    }

    cout << n1 << endl
         << n2;
}
