//acc
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string S, T; cin >> S >> T;

    reverse(S.begin(), S.end());

    if (S == T)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}