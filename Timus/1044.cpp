/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1025
******
*/

/**
  ** @Author: Rezuanul Islam Fahim
  ** Date Created: 07/02/2019
**/

#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
    int val = 1;
    for (int i = 0; i < b; i++) {
        val *= a;
    }
    return val;
}

int main() {
    int n, cnt[37];
    memset(cnt, 0, sizeof(cnt));
    cin >> n;
    for (int i = 0; i < power(10, n / 2); i++) {
        int sum = 0, digit = i;
        while (digit) {
            sum += digit % 10;
            digit /= 10;
        }
        cnt[sum]++;
    }
    int ans = 0;
    for (int i = 0; i < 37; i++) {
        ans += cnt[i] * cnt[i];
    }
    cout << ans;
}
