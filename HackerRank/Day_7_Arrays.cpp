/* 
******
****** https://www.hackerrank.com/challenges/30-arrays/problem
******
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
