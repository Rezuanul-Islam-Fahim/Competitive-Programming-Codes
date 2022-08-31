/*
******
****** https://codeforces.com/contest/677/problem/A
******
*/

#include <iostream>
using namespace std;

int main()
{
    int n, h, a[1000], count = 0;
    cin >> n >> h;

    for (int x = 0; x < n; x++)
    {
        cin >> a[x];
        if (a[x] > h)
            count += 2;
        else
            count++;
    }

    cout << count;
}
