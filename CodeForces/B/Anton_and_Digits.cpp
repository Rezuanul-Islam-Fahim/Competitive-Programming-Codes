/*
******
****** https://codeforces.com/contest/734/problem/B
******
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int k2, k3, k5, k6, sum = 0;
    scanf("%d%d%d%d", &k2, &k3, &k5, &k6);
    if (k2 >= k5)
    {
        if (k5 <= k6)
            sum += 256 * k5, k2 -= k5;
        else
            sum += 256 * k6, k2 -= k6;
    }
    else
    {
        if (k2 <= k6)
            sum += 256 * k2, k2 -= k2;
        else
            sum += 256 * k6, k2 -= k6;
    }
    if (k2 >= k3)
        sum += 32 * k3;
    else
        sum += 32 * k2;
    printf("%d", sum);
}
