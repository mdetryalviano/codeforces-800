//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        int fr = 0, sr = 0;
        string n; cin >> n;

        for (int i = 0; i < 3; i++)
            fr += (int)n[i];
        
        for (int i = 3; i < n.length(); i++)
            sr += (int)n[i];

        if (fr == sr)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}