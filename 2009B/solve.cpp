//acc
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 4; j++) {
            char x; cin >> x;

            if (x == '#')
                ans.push_back(j);
        }
    }

    for (int i = n - 1; i >= 0; i--)
        cout << ans[i] << " ";

    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}