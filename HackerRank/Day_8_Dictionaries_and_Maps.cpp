/* 
******
****** https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
******
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    int n;
    cin >> n;
    string name;
    for (int i = 0; i < n; i++) {
        string s;
        int num;
        cin >> s >> num;
        mp[s] = num;
    }
    while(cin >> name) {
        if (mp[name])
            cout << name << "=" << mp[name] << "\n";
        else cout << "Not found\n";
    }
}
