/*
******
****** https://codeforces.com/contest/71/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;

    for (int x = 0; x < n; x++)
    {
        cin >> str;

        if (str.length() > 10)
        {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << "\n";
        }
        else
        {
            cout << str << "\n";
        }
    }
}
