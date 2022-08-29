/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1079
******
*/

/**
  ** @Author: Rezuanul Islam Fahim
  ** Date Created: 08/02/2019
**/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 10;
int dp[MAXN];

void genNum() {
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 1; i <= 50000; i++) {
        dp[2 * i] = dp[i];
        dp[2 * i + 1] = dp[i] + dp[i + 1];
    }
}

int main() {
    genNum();
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            ans = max(ans, dp[i]);
        }
        cout << ans << "\n";
    }
}
