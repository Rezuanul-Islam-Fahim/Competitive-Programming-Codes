/*
******
****** https://codeforces.com/contest/867/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 08/02/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0, sf = 0;
    string ss;
    cin >> n >> ss;
    for (int i = 0; i < n - 1; i++)
    {
        if (ss[i] == 'S' && ss[i + 1] == 'F')
            s++;
        else if (ss[i] == 'F' && ss[i + 1] == 'S')
            sf++;
    }
    cout << (s > sf ? "YES" : "NO");
}
