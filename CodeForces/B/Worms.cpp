/*
******
****** https://codeforces.com/contest/474/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> grp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        grp[i] = sum;
    }
    vector<int> worms(sum + 1);
    int ind = 0;
    for (int i = 1; i <= sum; i++)
    {
        if (i > grp[ind])
            ind++;
        worms[i] = ind + 1;
    }
    int m, val;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        cout << worms[val] << "\n";
    }
}
