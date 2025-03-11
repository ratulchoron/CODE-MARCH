#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << a[0] << "\n";
            continue;
        }

        sort(a.begin(), a.end());

        cout << a[n - 1] + a[n - 2] << "\n";
    }

    return 0;
}
