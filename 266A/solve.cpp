//acc
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int N, ans = 0; cin >> N;
    string S; cin >> S;

    for (int i = 0; i <= S.length() - 1; i++) {
        if (i != S.length() - 1 && S[i] == S[i + 1]) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}