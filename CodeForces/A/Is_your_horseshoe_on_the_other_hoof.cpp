/*
******
****** https://codeforces.com/contest/228/problem/A
******
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> s(4);
    cin >> s[0] >> s[1] >> s[2] >> s[3];

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());

    cout << 4 - s.size();
}
