/*
******
****** https://codeforces.com/contest/479/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int k[10];

    k[0] = a + b + c;
    k[1] = a * b * c;
    k[2] = a * b + c;
    k[3] = a + b * c;
    k[4] = a * (b + c);
    k[5] = (a + b) * c;

    sort(k, k + 6);

    cout << k[5];
}
