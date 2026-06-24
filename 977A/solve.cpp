//acc
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int K, N; cin >> K >> N;

    for (int i = 1; i <= N; i++) {
        if (K % 10 == 0)
            K /= 10;
        else
            K -= 1;
    }

    cout << K;

    return 0;
}