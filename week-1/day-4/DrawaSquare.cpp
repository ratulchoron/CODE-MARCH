#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;  
    cin >> t;
    
    while (t--) {  
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        
        
        if (abs(l) == abs(r) && abs(r) == abs(d) && abs(d) == abs(u)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}

