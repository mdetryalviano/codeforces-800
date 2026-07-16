//acc
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;

    ll res = pow(5, n);

    string s = to_string(res);
    
    if (s.length() <= 2) {
        cout << s;
    } else {
        string ans = s.substr(s.length() - 3, 2);
        cout << ans;
    }
    
    return 0;
}