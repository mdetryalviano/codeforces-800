//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;

    vector<int> a(n), ans;

    for (int i = 0; i < n; i++) cin >> a[i];

    int h = a[0], l = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > h) {
            h = max(h, a[i]);
            ans.push_back(a[i]);
        } else if (a[i] < l) {
            l = min(l, a[i]);
            ans.push_back(a[i]);
        }
    }

    cout << ans.size();
    
    return 0;
}