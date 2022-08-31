/*
******
****** https://codeforces.com/contest/266/problem/B
******
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t >> s;

    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }

    cout << s;
}
