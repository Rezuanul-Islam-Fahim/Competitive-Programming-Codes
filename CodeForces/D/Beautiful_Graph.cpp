/*
******
****** https://codeforces.com/contest/1093/problem/D
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
typedef long long LL;

const int MAXN = 3e5 + 10;
const int MOD = 998244353;
int ar[MAXN];
int mx = INT_MIN;
int mn = INT_MAX;
vector<int> G[MAXN];
int vis[MAXN], cnt[2], p[MAXN];
bool bad;

void dfs(int v, int u)
{
    vis[v] = u;
    cnt[u]++;
    for (auto nn : G[v])
    {
        if (vis[nn] == -1)
            dfs(nn, 1 - u);
        if (vis[v] ^ vis[nn] == 0)
            bad = true;
    }
}

int main()
{
    // fast_run();
    // file_in();
    // file_out;
    p[0] = 1;
    forn(i, 1, MAXN) p[i] = (2 * p[i - 1]) % MOD;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        forp(i, 1, n) G[i].clear();
        forp(i, 1, n) vis[i] = -1;
        forp(i, 1, m)
        {
            int a, b;
            cin >> a >> b;
            G[a].pb(b);
            G[b].pb(a);
        }
        int res = 1;
        forp(i, 1, n)
        {
            bad = false;
            if (vis[i] == -1)
            {
                cnt[0] = cnt[1] = 0;
                dfs(i, 0);
                int cur = (p[cnt[0]] + p[cnt[1]]) % MOD;
                res = (res * 1LL * cur) % MOD;
            }
            if (bad)
            {
                cout << '0' << "\n";
                break;
            }
        }
        if (!bad)
            cout << res << "\n";
    }
}