//acc
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    string ans = "NO\n";
    int x = 0, y = 0;

    for (char d : s) {
        if (d == 'U') {
            y++;
        } else if (d == 'R') {
            x++;
        } else if (d == 'D') {
            y--;
        } else if (d == 'L') {
            x--;
        }

        if (x == 1 && y == 1) {
            ans = "YES\n";
            break;
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