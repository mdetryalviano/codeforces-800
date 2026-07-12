//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, mc = 0, cc = 0; cin >> n;

    while(n--) {
        int m, c; cin >> m >> c;
        
        if (m > c) mc++;
        else if (m < c) cc++;
    }

    if (mc > cc) cout << "Mishka";
    else if (mc < cc) cout << "Chris";
    else cout << "Friendship is magic!^^";
    
    return 0;
}