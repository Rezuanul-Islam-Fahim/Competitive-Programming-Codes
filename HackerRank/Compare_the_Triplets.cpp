/* 
******
****** https://www.hackerrank.com/challenges/compare-the-triplets/problem
******
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(3);
    vector<int> b(3);
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) cnt1++;
        else if (a[i] < b[i]) cnt2++;
    }
    cout << cnt1 << " " << cnt2;
}
