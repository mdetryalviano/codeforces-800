//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) {
        int r; cin >> r;
        a[r] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}