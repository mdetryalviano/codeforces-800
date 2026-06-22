//acc
#include <bits\stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string S; cin >> S;
    vector<int> N;

    for (int i = 0; i <= S.length() - 1; i++) {
        if (S[i] == '+')
            continue;
        else
            N.push_back((int)S[i] - '0');
    }

    sort(N.begin(), N.end());

    for (int i = 0; i <= N.size() - 1; i++) {
        if (i != N.size() - 1)
            cout << N[i] << '+';
        else
            cout << N[i];
    }

    return 0;
}