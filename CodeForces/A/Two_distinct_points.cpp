/*
******
****** https://codeforces.com/contest/1108/problem/A
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 31/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        vector<int> ar({l1, r1, l2, r2});
        int ans1, ans2;
        for (int i : ar)
        {
            for (int j : ar)
            {
                if (i >= l1 && i <= r1 && j >= l2 && j <= r2 && i != j)
                {
                    ans1 = i;
                    ans2 = j;
                }
            }
        }
        cout << ans1 << " " << ans2 << "\n";
    }
}
