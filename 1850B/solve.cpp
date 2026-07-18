//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        vector<int> a(n + 1, 0);
        
        int m = 0, ans = 0;

        for (int i = 1; i <= n; i++) {
            int x, y; cin >> x >> y;

            if (x > 10) {
                continue;
            } else {
                if (y > m) {
                    m = y;
                    ans = i;
                }
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}