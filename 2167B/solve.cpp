//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int q; cin >> q;

    while (q--) {
        int n; cin >> n;
        string s, t; cin >> s >> t;

        sort(s.begin(), s.end()); sort(t.begin(), t.end());

        (s == t) ? cout << "YES\n" : cout << "NO\n";
    }
    
    return 0;
}