#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        int ans = 0;

        for (char a : s) {
            if (isalnum(a))
                ans += a - '0';
        }

        cout << ans << '\n';
    }
    
    return 0;
}