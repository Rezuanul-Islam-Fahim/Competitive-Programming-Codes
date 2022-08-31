/*
******
****** https://codeforces.com/contest/703/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 09/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mishka = 0, chris = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
            mishka++;
        else if (x < y)
            chris++;
    }
    if (mishka > chris)
        cout << "Mishka";
    else if (mishka < chris)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
}
