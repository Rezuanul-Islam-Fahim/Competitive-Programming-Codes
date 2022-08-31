/*
******
****** https://codeforces.com/contest/734/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a = 0, d = 0;
    char c;
    cin >> n;

    for (int x = 0; x < n; x++)
    {
        cin >> c;
        if (c == 'A')
            a++;
        else
            d++;
    }

    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";
}
