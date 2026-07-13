//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        int n, ans = -1; cin >> n;
        vector<int> freq(n + 1, 0);

        while (n--) {
            int x; cin >> x;
            freq[x]++;

            if (freq[x] >= 3)
                ans = x;
        }

        cout << ans << '\n';
    }
    
    return 0;
}