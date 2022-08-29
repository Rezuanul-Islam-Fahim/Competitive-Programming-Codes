/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1014
******
*/

/**
  ** @Author: Rezuanul Islam Fahim
  ** Date Created: 05/02/2019
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    if (n == 0) cout << 10;
    else if (n == 1) cout << 1;
    else {
        for (int i = 9; i >= 2; i--) {
            while (n % i == 0) {
                n /= i;
                ans.push_back(i);
            }
        }
        if (n == 1) {
            for (int i = ans.size() - 1; i >= 0; i--) {
                cout << ans[i];
            }
        }
        else cout << -1;    
    }
}
