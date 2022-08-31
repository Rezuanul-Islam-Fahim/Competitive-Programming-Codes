/*
******
****** https://codeforces.com/contest/1133/problem/A
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
    string s1, s2;
    cin >> s1 >> s2;
    int h1 = (s1[0] - '0') * 10 + (s1[1] - '0');
    int h2 = (s2[0] - '0') * 10 + (s2[1] - '0');
    int m1 = (s1[3] - '0') * 10 + (s1[4] - '0');
    int m2 = (s2[3] - '0') * 10 + (s2[4] - '0');
    int dm;
    if (h1 == h2)
        dm = m2 - m1;
    else
    {
        dm = 60 - m1 + m2;
        dm += 60 * (h2 - h1 - 1);
    }
    dm /= 2;
    m1 += dm;
    while (m1 >= 60)
    {
        h1++;
        m1 -= 60;
    }
    cout << setw(2) << setfill('0') << h1 << ":";
    cout << setw(2) << setfill('0') << m1;
}