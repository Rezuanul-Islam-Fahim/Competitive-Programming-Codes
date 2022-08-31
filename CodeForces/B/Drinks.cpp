/*
******
****** https://codeforces.com/contest/200/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    cout << fixed << setprecision(12);
    cout << sum / n;
}
