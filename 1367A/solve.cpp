//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        
        cout << s[0];

        for (int i = 1; i < s.length(); i += 2) {
            cout << s[i];
        }

        cout << '\n';
    }
    
    return 0;
}