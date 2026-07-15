//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        vector<string> a(3);

        for (int i = 0; i < 3; i++)
            cin >> a[i];

        for (string i : a) {
            cout << i[0];
        }

        cout << endl;
    }
    
    return 0;
}