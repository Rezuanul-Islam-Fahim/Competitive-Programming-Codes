/*
******
****** https://codeforces.com/contest/96/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter = 1;
    string str;
    cin >> str;

    for (int n = 0; n < str.length() - 1; n++)
    {
        if (str[n] == str[n + 1])
        {
            counter++;
            if (counter == 7)
            {
                cout << "YES\n";
                return 0;
            }
        }
        else
        {
            counter = 1;
        }
    }

    cout << "NO\n";
}
