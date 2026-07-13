//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, ans = 0, total = 0, level = 0; cin >> n;

    for (int i = 1; ; i++) {
        level += i;

        if (total + level <= n) {
            total += level;
            ans++;
        } else {
            break;
        }
    }

    cout << ans;
    
    return 0;
}