/*
******
****** https://codeforces.com/contest/1015/problem/A
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, l, r;
    vector<int> mem(1000);
    scanf("%d%d", &n, &m);
    while (n--)
    {
        scanf("%d%d", &l, &r);
        for (int i = l; i <= r; i++)
            mem[i] = 1;
    }
    vector<int> mem2(m + 1);
    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        if (mem[i] != 1)
        {
            mem2[cnt] = i;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; i++)
        printf("%d ", mem2[i]);
}
