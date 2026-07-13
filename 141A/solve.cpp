//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    string a, b, c; cin >> a >> b >> c; 
    string ab = a + b;

    sort(ab.begin(), ab.end());
    sort(c.begin(), c.end());

    (ab == c) ? cout << "YES" : cout << "NO";
    
    return 0;
}