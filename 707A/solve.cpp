//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int m, n; cin >> m >> n;
    int total = m * n;
    int ans = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            char x; cin >> x;

            if (x == 'W' || x == 'B' || x == 'G')
                ans++;
        }
    }

    (ans == total) ? cout << "#Black&White" : cout << "#Color";
    
    return 0;
}