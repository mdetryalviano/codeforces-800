//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        string a, b; cin >> a >> b;

        char first_a = a[0]; char first_b = b[0];

        a[0] = first_b; b[0] = first_a;

        cout << a << " " << b << '\n';
    }
    
    return 0;
}