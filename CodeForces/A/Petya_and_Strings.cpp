/*
******
****** https://codeforces.com/contest/112/problem/A
******
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    if (s < t)
        cout << -1;
    else if (s > t)
        cout << 1;
    else
        cout << 0;
}
