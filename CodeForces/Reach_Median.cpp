/*
******
****** https://codeforces.com/contest/1037/problem/B
******
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    long long lh = 0, rh = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] > s)
            lh += arr[i] - s;
        if (arr[n - i - 1] < s)
            rh += s - arr[n - i - 1];
    }
    cout << lh + rh + abs(arr[n / 2] - s);
}
