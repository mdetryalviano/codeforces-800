//acc
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int T, H, ans = 0; cin >> T >> H;

    vector<int> A(T);

    for (int i = 0; i <= T - 1; i++)
        cin >> A[i];

    for (int i : A) {
        if (i > H)
            ans += 2;
        else
            ans++;
    }

    cout << ans;

    return 0;
}