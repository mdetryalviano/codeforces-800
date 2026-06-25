//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int N, P = 0, M = 0; cin >> N;

    while (N--) {
        int A, B; cin >> A >> B;
        P -= A; P += B;
        M = max(M, P);
    }

    cout << M;
    
    return 0;
}