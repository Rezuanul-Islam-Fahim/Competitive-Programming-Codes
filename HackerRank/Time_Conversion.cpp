/* 
******
****** https://www.hackerrank.com/challenges/time-conversion/problem
******
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int hh, mm, ss;
    hh = (s[0] - '0') * 10 + (s[1] - '0');
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');
    if (s[8] == 'P' && hh < 12) hh += 12;
    else if (s[8] == 'A' && hh == 12) hh = 0;
    cout << setw(2) << setfill('0') << hh << ":";
    cout << setw(2) << setfill('0') << mm << ":";
    cout << setw(2) << setfill('0') << ss << "\n"; 
}
