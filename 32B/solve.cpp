//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string s, ans = ""; cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') ans += '0';
        else if (s[i] == '-' && s[i + 1] == '.') {
            i++;
            ans += '1';
        }
        else if (s[i] == '-' && s[i + 1] == '-') {
            i++;
            ans += '2';
        }
    }

    cout << ans;
    
    return 0;
}