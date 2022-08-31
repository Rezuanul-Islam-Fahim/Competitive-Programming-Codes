/*
******
****** https://codeforces.com/contest/339/problem/B
******
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m, k, l;
    long long ans = 0;
    cin >> n >> m;
    k = 1;

    for (int i = 1; i <= m; i++)
    {
        cin >> l;
        if (k <= l)
        {
            ans += l - k;
        }
        else
        {
            ans += n - (k - l);
        }
        k = l;
    }

    cout << ans;
}
