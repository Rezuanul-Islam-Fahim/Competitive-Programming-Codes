/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1025
******
*/

/**
  ** @Author: Rezuanul Islam Fahim
  ** Date Created: 06/02/2019
**/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e2 + 10;
int ar[MAXN];

int main() {
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> ar[i];
    }
    sort(ar, ar + k);
    int ans = 0;
    for (int i = 0; i <= k / 2; i++) {
        ans += ar[i] % 2 ? (ar[i] + 1) / 2 : ar[i] / 2 + 1;
    }
    cout << ans;
}
