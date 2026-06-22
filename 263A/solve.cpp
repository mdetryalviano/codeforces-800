//acc
#include <bits\stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int N, ans = 0;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> N;
            if (N == 1) {
                ans = abs(3-i) + abs(3-j);
            }
        }
    }

    cout << ans;

    return 0;
}