/*
******
****** https://codeforces.com/contest/490/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector<int> st[4];
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        st[x].push_back(i + 1);
    }
    int team = min(st[1].size(), min(st[2].size(), st[3].size()));
    cout << team << "\n";
    for (int i = 0; i < team; i++)
    {
        cout << st[1][i] << " " << st[2][i] << " " << st[3][i] << "\n";
    }
}
