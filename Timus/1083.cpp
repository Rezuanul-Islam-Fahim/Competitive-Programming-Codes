/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1083
******
*/

/**
  ** @Author: Rezuanul Islam Fahim
  ** Date Created: 02/02/2019
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, len;
    string s;
    cin >> n >> s;
    len = s.length();
    if (n % len) k = n % len;
    else k = len;
    int fact = 1, i = 0;
    while (n - len * i >= k) {
        fact *= (n - len * i);
        i++;
    }
    cout << fact;
}
