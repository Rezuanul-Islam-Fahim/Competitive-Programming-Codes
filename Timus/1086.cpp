/* 
******
****** https://acm.timus.ru/problem.aspx?space=1&num=1086
******
*/

/**
  ** @Author: Rezuanul Islam Fahim
  ** Date Created: 03/02/2019
**/

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 165000;
const int nPrime = 15001;
bool isPrime[MAXN];
int prime[nPrime];

void genPrime() {
    int sz = 2, limit = sqrt(MAXN + 1);
    prime[1] = 2;
    for (int i = 2; i <= MAXN; i += 2) isPrime[i] = false;
    for (int i = 3; i <= MAXN && sz < nPrime; i += 2) {
        if (!isPrime[i]) {
            prime[sz++] = i;
            if (i <= limit) {
                for (int j = i * i; j <= MAXN; j += i * 2) {
                    isPrime[j] = true;
                }
            }
        }
    }
}

int main() {
    genPrime();
    int q;
    cin >> q;
    while (q--) {
        int ind;
        cin >> ind;
        cout << prime[ind] << "\n";
    }
}
