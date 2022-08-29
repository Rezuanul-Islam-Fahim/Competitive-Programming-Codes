/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1197
******
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int row = s[0] - 'a' + 1;
        int column = s[1] - '0';
        int cnt = 0;
        if (row + 2 <= 8) {
            if (column + 1 <= 8) cnt++;
            if (column - 1 >= 1) cnt++;
        }
        if (row - 2 >= 1) {
            if (column + 1 <= 8) cnt++;
            if (column - 1 >= 1) cnt++;
        }
        if (column + 2 <= 8) {
            if (row + 1 <= 8) cnt++;
            if (row - 1 >= 1) cnt++;
        }
        if (column - 2 >= 1) {
            if (row + 1 <= 8) cnt++;
            if (row - 1 >= 1) cnt++;
        }
        cout << cnt << "\n";
    }
}
