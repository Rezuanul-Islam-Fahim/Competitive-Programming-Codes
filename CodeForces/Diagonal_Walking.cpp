/*
******
****** https://codeforces.com/contest/954/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int x = 0; x < n; x++)
    {
        counter++;

        if ((s[x] == 'R' && s[x + 1] == 'U') || (s[x] == 'U' && s[x + 1] == 'R'))
        {
            x++;
        }
    }

    cout << counter << "\n";
}
