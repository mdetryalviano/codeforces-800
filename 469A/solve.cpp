//acc
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;
    set<int> a;

    int p; cin >> p;
    for (int i = 0; i < p; i++) {
        int s; cin >> s;
        if (s == 0)
            continue;
        else
            a.insert(s);
    }

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int s; cin >> s;
        if (s == 0) 
            continue;
        else
            a.insert(s);
    }
    
    (a.size() == n) ? cout << "I become the guy." : cout << "Oh, my keyboard!";
 
    return 0;
}