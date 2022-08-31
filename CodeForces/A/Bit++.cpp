/*
******
****** https://codeforces.com/contest/282/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    string str;

    for (int y = 0; y < n; y++)
    {
        cin >> str;
        if (str == "X++" || str == "++X")
        {
            ++x;
        }
        else if (str == "--X" || str == "X--")
        {
            --x;
        }
    }

    cout << x << "\n";
}
