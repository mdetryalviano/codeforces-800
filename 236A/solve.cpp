//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    vector<char> special_char;

    for (int i = 0; i <= s.length() - 1; i++) {
        special_char.push_back(s[i]);
    }

    sort(special_char.begin(), special_char.end());

    special_char.erase(unique(special_char.begin(), special_char.end()), special_char.end());

    if (special_char.size() % 2 == 0) cout << "CHAT WITH HER!"; else cout << "IGNORE HIM!";

    return  0;
}