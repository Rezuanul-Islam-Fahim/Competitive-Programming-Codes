/*
******
****** https://codeforces.com/contest/785/problem/A
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
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
            ans += 4;
        else if (s == "Cube")
            ans += 6;
        else if (s == "Octahedron")
            ans += 8;
        else if (s == "Dodecahedron")
            ans += 12;
        else
            ans += 20;
    }
    cout << ans;
}
