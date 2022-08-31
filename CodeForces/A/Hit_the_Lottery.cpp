/*
******
****** https://codeforces.com/contest/996/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 08/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int note_100 = n / 100;
    n %= 100;
    int note_20 = n / 20;
    n %= 20;
    int note_10 = n / 10;
    n %= 10;
    int note_5 = n / 5;
    n %= 5;
    cout << note_100 + note_20 + note_10 + note_5 + n;
}
