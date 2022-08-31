/*
******
****** https://codeforces.com/contest/750/problem/A
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
#define PI acos(-1.00);

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

int main()
{
    // fast_run();
    // freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
    int n, k, min = 240, sum = 0, ans = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        sum += 5 * i;
        if (sum + k <= min)
            ans++;
        else
            break;
    }
    cout << ans;
}
