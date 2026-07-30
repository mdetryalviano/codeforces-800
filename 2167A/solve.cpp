//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) {
        vector<int> s(4);

        for (int i = 0; i < 4; i++) cin >> s[i];

        sort(s.begin(), s.end());

        (s[0] * s[1] == s[2] * s[3]) ? cout << "YES\n" : cout << "NO\n";
    }
    
    return 0;
}