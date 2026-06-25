//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int N, ans = 0; cin >> N;
    vector<int> M(N);

    for (int i = 0; i <= N - 1; i++)
        cin >> M[i];

    for (int i = 0; i <= N - 1; i++) {
        if (M[i] != M[i - 1])
            ans++;
    }

    cout << ans;
    
    return 0;
}