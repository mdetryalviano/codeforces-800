//acc
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int N, ans = 0; cin >> N;

    vector<int> A(N);

    for (int i = 0; i <= N - 1; i++) {
        cin >> A[i];
    }

    for (int i : A) {
        ans += i;
    }

    (ans > 0) ? cout << "HARD" : cout << "EASY";

    return 0;
}