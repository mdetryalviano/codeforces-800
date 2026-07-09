//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, r = 0; cin >> n;

    for (int i = 1; i <= n; i++) {
        int a; cin >> a; r += a;
    }

    double ans = (double)r/n;
    
    cout << ans << endl;
    
    return 0;
}