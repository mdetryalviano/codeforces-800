//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    string s; cin >> s;

    int ans = 0;

    char now = 'a';

    for (char a : s) {
        int diff = abs(a - now);
        ans += min(diff, 26 - diff);
        now = a;
    }

    cout << ans;
    
    return 0;
}