/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1313
******
*/

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int ar[101][101], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int r = i, c = 0;
        while (r >= 0 && c < n) {
            cout << ar[r][c] << " ";
            r--, c++;
        }
    }
    for (int i = 1; i < n; i++) {
        int r = n - 1, c = i;
        while (r >= 0 && c < n) {
            cout << ar[r][c] << " ";
            r--, c++;
        }
    }
}
