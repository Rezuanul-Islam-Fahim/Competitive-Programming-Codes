/*
******
****** https://codeforces.com/contest/1106/problem/D
******
*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
const int MAXN = 1e5 + 10;
vector<int> Graph[MAXN];
vector<int> res;
bool vis[MAXN];
priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
    // ios::sync_with_stdio(0), cin.tie(0);
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        Graph[x].pb(y);
        Graph[y].pb(x);
    }
    pq.push(1);
    vis[1] = true;
    while (!pq.empty())
    {
        int nq = pq.top();
        pq.pop();
        res.pb(nq);
        for (int i = 0; i < Graph[nq].size(); i++)
        {
            if (!vis[Graph[nq][i]])
            {
                pq.push(Graph[nq][i]);
                vis[Graph[nq][i]] = true;
            }
        }
    }
    for (int i : res)
    {
        cout << i << " ";
    }
}
