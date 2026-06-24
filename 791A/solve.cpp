//acc
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int A, B, ans = 1; cin >> A >> B;

    while(true) {
        A *= 3; B *=2;
        if (A > B)
            break;
        else
            ans++;
    }

    cout << ans;

    return 0;
}