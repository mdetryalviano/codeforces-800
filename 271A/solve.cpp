//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int Y, counter = 0; cin >> Y;

    while (true) {
        Y++;
        string S = to_string(Y);
        
        set<char> unique(S.begin(), S.end());
        
        if (unique.size() == 4) {
            cout << S;
            break;
        }
    }
    
    return 0;
}