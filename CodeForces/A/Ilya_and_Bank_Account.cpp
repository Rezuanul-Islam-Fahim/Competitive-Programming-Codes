/*
******
****** https://codeforces.com/contest/313/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 0)
        cout << n;
    else
    {
        if (n % 10 < (n / 10) % 10)
            cout << n / 10;
        else
        {
            stringstream ss;
            string s;
            ss << n;
            ss >> s;
            ss.clear();
            s.erase(s.length() - 2, 1);
            ss << s;
            ss >> n;
            cout << n;
        }
    }
}
