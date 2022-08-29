/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1001
******
*/

/**
  ** @Author: Rezuanul Islam Fahim
  ** Date Created: 15/11/2018
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<double> sqroot;
    long long num;
    while (cin >> num) {
        double square_root = sqrt(num);
        sqroot.push_back(square_root);
    }
    cout << fixed << setprecision(4);
    for (int i = sqroot.size() - 1; i >= 0; i--) {
        cout << sqroot[i] << "\n";
    }
}
