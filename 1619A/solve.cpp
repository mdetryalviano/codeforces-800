//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;

        if (s.length() % 2 == 0) {
            string sub1 = s.substr(0, s.length() / 2);
            string sub2 = s.substr(s.length() / 2, s.length() / 2);

            (sub1 == sub2) ? cout << "YES\n" : cout << "NO\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}