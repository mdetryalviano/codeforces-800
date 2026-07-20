//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n, ans = 0; cin >> n;
    
    vector<int> h(n), a(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i] >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (h[i] == a[j]) {
                    ans++;
                }
            }
        }
    }

    cout << ans;
    
    return 0;
}