//acc
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    vector<bool> visited(26, false); 
    string ans = "YES\n";

    visited[s[0] - 'A'] = true; 

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            continue;
        } else {
            visited[s[i - 1] - 'A'] = true;
            if (visited[s[i] - 'A'] == true) {
                ans = "NO\n";
                break;
            }
        }
    }

    cout << ans; 
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}