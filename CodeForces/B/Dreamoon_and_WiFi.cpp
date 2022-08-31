/*
******
****** https://codeforces.com/contest/476/problem/B
******
*/

/**
 ** @Author: Rezuanul Islam Fahim
 ** Date Created: 04/01/2019
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int steps_n = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '+')
            steps_n++;
        else
            steps_n--;
    }
    int steps = 0, steps_un = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == '+')
            steps++;
        else if (s2[i] == '-')
            steps--;
        else
            steps_un++;
    }
    int distance = abs(steps_n - steps);
    cout << fixed << setprecision(12);
    if (distance > steps_un)
        cout << (double)0;
    else
    {
        double ans = 0;
        for (int i = 0; i < (1 << steps_un); i++)
        {
            int cnt = 0;
            for (int j = 0; j < steps_un; j++)
            {
                if (i & (1 << j))
                    cnt++;
                else
                    cnt--;
            }
            if (cnt == distance)
                ans++;
        }
        ans /= (1 << steps_un);
        cout << (double)ans;
    }
}
