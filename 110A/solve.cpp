//acc
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    ll N, ans = 0; cin >> N;

    string S = to_string(N);

    for (int i = 0; i <= S.length() - 1; i++)
        if (S[i] == '4' || S[i] == '7')
            ans++;

    if (ans == 4 || ans == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}