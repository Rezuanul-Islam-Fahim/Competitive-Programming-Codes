/*
******
****** https://codeforces.com/contest/580/problem/A
******
*/

#include <iostream>
using namespace std;

int main()
{
    int n, a[100000], c = 1, k = 0;
    cin >> n;
    cin >> a[0];

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i - 1] <= a[i])
        {
            c++;
        }
        else
        {
            if (k < c)
                k = c;
            c = 1;
        }
    }

    cout << (c < k ? k : c);
}
