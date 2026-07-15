//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        vector<char> a;

        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                char x; cin >> x;

                if (isalpha(x))
                    a.push_back(x);
            }
        }

        for (char x : a)
            cout << x;

        cout << '\n';
    }
    
    return 0;
}