//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        bool f = a + b == c;
        bool s = a + c == b;
        bool t = b + c == a;

        if (f || s || t)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}