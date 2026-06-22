//acc
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K, ans = 0; cin >> N; cin >> K;
    vector<int> A(N);

    for (int i = 0; i <= N - 1; i++)
        cin >> A[i];

    int curr_score = A[K - 1];

    for (int E : A)
        if (E > 0 && E >= curr_score)
            ans++;

    cout << ans;

    return 0;
}
