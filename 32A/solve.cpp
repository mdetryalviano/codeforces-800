//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, d, ans = 0; cin >> n >> d;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (abs(a[i] - a[j]) <= d) {
                    ans++;
                }
            }
        }
    }

    cout << ans;
    
    return 0;
}