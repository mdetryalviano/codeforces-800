//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        int a, b, c; cin >> a >> b >> c;

        bool ab = a + b >= 10;
        bool ac = a + c >= 10;
        bool bc = b + c >= 10;

        (ab || ac || bc) ? cout << "YES\n" : cout << "NO\n";
    }
    
    return 0;
}