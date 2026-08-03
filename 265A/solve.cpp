//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    string s, t; cin >> s >> t;

    int pos = 0;

    for (char i : t) {
        if (s[pos] == i)
            pos++;
    }

    cout << pos + 1;
    
    return 0;
}