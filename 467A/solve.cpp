//acc
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int N, ans = 0; cin >> N;

    while (N--) {
        int P, Q; cin >> P >> Q;

        if (P + 2 <= Q)
            ans++;
    }

    cout << ans;

    return 0;
}