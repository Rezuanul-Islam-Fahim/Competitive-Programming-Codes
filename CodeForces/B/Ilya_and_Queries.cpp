/*
******
****** https://codeforces.com/contest/313/problem/B
******
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main()
{
    char s[100001];
    int q, l, j, a[100001];
    cin >> s;
    a[1] = 0;
    for (int i = 1; i < sizeof(s); i++)
    {
        if (s[i] == s[i - 1])
            a[i + 1] = a[i] + 1;
        else
            a[i + 1] = a[i];
    }
    cin >> q;
    while (q--)
    {
        cin >> l >> j;
        cout << a[j] - a[l] << "\n";
    }
}
