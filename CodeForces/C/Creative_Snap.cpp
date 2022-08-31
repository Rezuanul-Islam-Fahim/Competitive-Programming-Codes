/*
******
****** https://codeforces.com/contest/1111/problem/C
******
*/

#include <bits/stdc++.h>
using namespace std;

#define fast_run() ios::sync_with_stdio(0), cin.tie(0)
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

const int MAXN = 1e5 + 10;
int ar[MAXN];
int mx = INT_MIN;
int mn = INT_MAX;
int n, k, a, b;
vi ave;

LL rec(LL i, LL j)
{
    int x, y, avengers;
    LL needed_pow;
    x = upper_bound(ave.begin(), ave.end(), j) - ave.begin();
    y = lower_bound(ave.begin(), ave.end(), i) - ave.begin();
    avengers = x - y;
    if (avengers == 0)
        needed_pow = a;
    else
    {
        LL len = j - i + 1;
        needed_pow = b * avengers * len;
    }
    if (i == j || avengers == 0)
        return needed_pow;
    int mid = (i + j) / 2;
    LL res = rec(i, mid) + rec(mid + 1, j);
    LL minPower = min(needed_pow, res);
    return minPower;
}

int main()
{
    // fast_run();
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    cin >> n >> k >> a >> b;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        ave.pb(x);
    }
    sort(ave.begin(), ave.end());
    int len = 1 << n;
    cout << rec(1, len);
}
