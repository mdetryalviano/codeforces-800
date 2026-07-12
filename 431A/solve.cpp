//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int ans = 0;

    vector<int> a(5);
    for (int i = 1; i < 5; i++) cin >> a[i];

    string s; cin >> s;

    for (char i : s) {
        ans += a[i - '0'];
    }

    cout << ans;
    
    return 0;
}