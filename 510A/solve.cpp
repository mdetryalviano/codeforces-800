//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, m; cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= m ; j++) {
                cout << "#";
            }
        } else {
            if (i % 2 == 0 && i % 4 != 0) {
                for (int j = 1; j <= m; j++) {
                    if (j == m)
                        cout << "#";
                    else
                        cout << ".";
                }
            }
            if (i % 4 == 0) {
                for (int j = 1; j <= m; j++) {
                    if (j == 1)
                        cout << "#";
                    else
                        cout << ".";
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}