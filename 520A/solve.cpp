//acc
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    unordered_set<char> a;
    int n; cin >> n;
    string s; cin >> s; transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (char i : s) {
        a.insert(i);
    }

    (a.size() < 26) ? cout << "NO\n" : cout << "YES\n";
    
    return 0;
}