//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) {
        int n, r = 0, ans = 0; cin >> n;

        for (int i = 1; i <= n; i++) {
            int a; cin >> a;
            if (a == 0) {
                r++;  
                ans = max(ans, r);
            } else {
                r = 0;
            }
        }

        cout << ans << '\n';
    }
    
    return 0;
}