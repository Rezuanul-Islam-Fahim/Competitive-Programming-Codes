/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1319
******
*/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e2 + 1;
int ar[MAXN][MAXN];

int main() {
    int n, cnt = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int r = 0, c = i;
        while (r < n && c >= 0) {
            ar[r][c] = cnt++;
            r++, c--;
        }
    }
    for (int i = 1; i < n; i++) {
        int r = i, c = n - 1;
        while (r < n && c >= 0) {
            ar[r][c] = cnt++;
            r++, c--;
        }
    }
    for (int i = 0; i < n; i++) {
        reverse(ar[i], ar[i] + n);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ar[i][j] << " ";
        }
        cout << "\n";
    }
}
