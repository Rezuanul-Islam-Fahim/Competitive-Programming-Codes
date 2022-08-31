/*
******
****** https://codeforces.com/contest/1133/problem/F1
******
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_run() ios::sync_with_stdio(0), cin.tie(0)
#define file_in() freopen("../input.txt", "r", stdin)
#define file_out() freopen("../output.txt", "w", stdout)
#define forn(k, i, j) for (int k = i; k < j; k++)
#define forp(k, i, j) for (int k = i; k <= j; k++)
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.00)

typedef map<int, int> mii;
typedef set<int> si;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef queue<int> Qi;
typedef long long LL;

const int MAXN = 2e5 + 10;
int cnt[MAXN];
int mx = -1;
int mn = INT_MAX;
bool vis[MAXN];
vi G[MAXN];
vector<pii> ans;

void bfs(int pos)
{
    Qi data;
    data.push(pos);
    vis[pos] = 1;
    while (!data.empty())
    {
        int V = data.front();
        data.pop();
        for (int i : G[V])
        {
            if (vis[i])
                continue;
            ans.pb(mp(V, i));
            vis[i] = 1;
            data.push(i);
        }
    }
}

int main()
{
    // fast_run();
    // file_in();
    // file_out;
    int n, m;
    cin >> n >> m;
    forn(i, 0, m)
    {
        int x, y;
        cin >> x >> y;
        G[x].pb(y);
        G[y].pb(x);
        cnt[x]++;
        cnt[y]++;
    }
    int pos = 1;
    forp(i, 2, n) if (cnt[pos] < cnt[i]) pos = i;
    bfs(pos);
    for (auto nn : ans)
        cout << nn.first << " " << nn.second << "\n";
}