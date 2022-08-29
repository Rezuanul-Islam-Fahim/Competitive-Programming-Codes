/* 
******
****** https://www.hackerrank.com/challenges/30-sorting/problem
******
*/

#include <bits/stdc++.h>
using namespace std;

void sort_arr(vector<int> a, int n) {
    int num_swaps = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                num_swaps++;
            }
        }
    }
    cout << "Array is sorted in " << num_swaps << " swaps.\n";
    cout << "First Element: " << a[0] << "\n";
    cout << "Last Element: " << a[n - 1] << "\n";
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort_arr(a, n);
}
