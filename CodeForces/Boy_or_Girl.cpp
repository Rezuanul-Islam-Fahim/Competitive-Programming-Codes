/*
******
****** https://codeforces.com/contest/236/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter = 1;
    char temp;
    string s;
    cin >> s;

    for (int n = 0; n < s.length(); n++)
    {
        for (int m = 0; m < s.length() - 1; m++)
        {
            if (s[m] > s[m + 1])
            {
                temp = s[m];
                s[m] = s[m + 1];
                s[m + 1] = temp;
            }
        }
    }

    for (int x = 0; x < s.length() - 1; x++)
    {
        if (s[x] != s[x + 1])
        {
            counter++;
        }
    }

    if (counter % 2 != 0)
    {
        cout << "IGNORE HIM!\n";
    }
    else
    {
        cout << "CHAT WITH HER!\n";
    }
}
