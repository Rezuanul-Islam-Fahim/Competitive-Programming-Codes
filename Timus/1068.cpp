/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1068
******
*/

/**
  ** @Author: Rezuanul Islam Fahim
  ** Date Created: 04/02/2019
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (n > 0 ? n * (n + 1) / 2 : 1 + n * (1 - n) / 2);
}
