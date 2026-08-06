//acc
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    
    vector<int> ans;
    int power = 1;

    while (n > 0) {
        int digit = n % 10;

        if (digit != 0)
            ans.push_back(digit * power); 

        power *= 10;

        n /= 10;
    }

    cout << ans.size() << "\n";

    for (int i : ans)
        cout << i << " ";

    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) solve();
    
    return 0;
}