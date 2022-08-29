/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1100
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

struct team {
    int id, score;
};

bool comp(team x, team y) {
    return x.score > y.score;
}

int main() {
    //fast_run();
    //freopen("../input.txt", "r", stdin);
    //freopen("../output.txt", "w", stdout);
    int n;
    cin >> n;
    team ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i].id >> ar[i].score;
    }
    stable_sort(ar, ar + n, comp);
    for (int i = 0; i < n; i++) {
        cout << ar[i].id << " " << ar[i].score << "\n";
    }
}
