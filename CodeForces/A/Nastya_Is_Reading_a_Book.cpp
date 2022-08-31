/*
******
****** https://codeforces.com/contest/1136/problem/A
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

const int MAXN = 1e5 + 10;
int ar[MAXN];
int mx = INT_MIN;
int mn = INT_MAX;

int main()
{
    // fast_run();
    // file_in();
    // file_out;
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        for (int k = l; k < r; k++)
        {
            ar[k] = cnt;
        }
        ar[r] = ++cnt;
    }
    int page;
    cin >> page;
    cout << n - ar[page - 1];
}