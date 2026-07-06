//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, ans = 0; cin >> n;
    vector<string> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] == "Icosahedron") ans += 20;
        else if (a[i] == "Dodecahedron") ans += 12;
        else if (a[i] == "Octahedron") ans += 8;
        else if (a[i] == "Cube") ans += 6;
        else if (a[i] == "Tetrahedron") ans += 4;
    }

    cout << ans;
    
    return 0;
}