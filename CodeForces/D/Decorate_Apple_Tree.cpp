/*
******
****** https://codeforces.com/contest/1056/problem/D
******
*/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 10;
vector<int> G[MAXN], ans;

int dfs(int i)
{
    if (G[i].size() == 0)
    {
        ans.push_back(1);
        return 1;
    }
    int sum = 0;
    for (int nn : G[i])
        sum += dfs(nn);
    ans.push_back(sum);
    return sum;
}

int main()
{
    // freopen("../input.txt", "r", stdin);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        G[x].push_back(i);
    }
    dfs(1);
    sort(ans.begin(), ans.end());
    for (int i : ans)
        cout << i << " ";
}