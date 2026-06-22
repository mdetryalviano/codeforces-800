#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int K, N, W, I = 0; cin >> K >> N >> W;

    for (int i = 1; i <= W; i++) {
        I += i * K;
    }

    int ans = I - N;

    ans <= 0 ? cout << 0 : cout << ans;

    return 0;
}