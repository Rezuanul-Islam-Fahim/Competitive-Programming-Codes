/* 
******
****** https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
******
*/

#include <bits/stdc++.h>
using namespace std;

#define mx 200000
int r[mx + 1];
int s[mx + 1];

void build_rank(int n) {
    for (int i = 0; i < n; i++) {
        if (i == 0) r[i] = 1;
        else {
            if (s[i] == s[i - 1]) {
                r[i] = r[i - 1];
            }
            else if (s[i] < s[i - 1]) {
                r[i] = r[i - 1] + 1;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    build_rank(n);
    int m, val, pnt = n - 1;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> val;
        int crnt;
        while (pnt >= 0 && val > s[pnt]) pnt--;
        if (pnt == -1) crnt = 1;
        else if (s[pnt] == val) {
            crnt = r[pnt];
        }
        else if (s[pnt] > val) {
            crnt = r[pnt] + 1;
        }
        cout << crnt << "\n";
    }
}
