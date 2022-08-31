/*
******
****** https://codeforces.com/contest/467/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p, q, num = 0;
    int counter = 0;

    while (num < n)
    {
        cin >> p >> q;

        if ((q - p) >= 2)
        {
            counter++;
        }

        num++;
    }

    cout << counter << "\n";
}
