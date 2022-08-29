/* 
******
****** https://www.hackerrank.com/challenges/birthday-cake-candles/problem
******
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> candle(n);
    for (int i = 0; i < n; i++) {
        cin >> candle[i];
    }
    sort(candle.begin(), candle.end());
    int large_candle = candle[n - 1];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (candle[i] == large_candle) cnt++;
    }
    cout << cnt;
}
