/*
******
****** https://codeforces.com/contest/1073/problem/A
******
*/

/*
    @Author: Rezuanul Islam Fahim
    Date Created: 27/10/2018
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        int cnt[26];
        memset(cnt, 0, sizeof(cnt));
        for (int j = i; j < n; j++)
        {
            cnt[s[j] - 'a']++;
            int lim = (j - i + 1) / 2, flag = 1;
            for (int i = 0; i < 26; i++)
            {
                if (cnt[i] > lim)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                cout << "YES\n";
                for (int k = i; k <= j; k++)
                    cout << s[k];
                return 0;
            }
        }
    }
    cout << "NO";
}
