/* 
******
****** https://www.hackerrank.com/challenges/diagonal-difference/problem
******
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        a[i].resize(n);
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0, j = n - 1; i < n; i++, j--) {
        sum1 += a[i][i];
        sum2 += a[i][j];
    }
    int result = abs(sum1 - sum2);
    cout << result;
}
