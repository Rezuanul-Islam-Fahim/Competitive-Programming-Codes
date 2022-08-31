/*
******
****** https://codeforces.com/contest/58/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, mainword = "hello";
    getline(cin, s);
    int a = 0, counter = 0;

    for (int n = 0; n < s.length(); n++)
    {
        if (s[n] == mainword[a])
        {
            counter++;
            a++;
        }
    }

    if (counter == 5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
