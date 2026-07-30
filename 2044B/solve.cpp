//acc
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a; cin >> a;
    string ans = "";

    for (int i = a.length() - 1; i >= 0; i--) {
        if (a[i] == 'q')
            ans += 'p';

        if (a[i] == 'p') 
            ans += 'q';

        if (a[i] == 'w')
            ans += 'w';
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}