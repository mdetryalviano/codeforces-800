//acc
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int N, A = 0, D = 0; cin >> N;
    string S; cin >> S;

    for (int i = 0; i <= N - 1; i++) {
        if (S[i] == 'A')
            A++;
        else if (S[i] == 'D')
            D++;
    }

    (A > D) ? cout << "Anton" : (A < D) ? cout << "Danik" : cout << "Friendship";

    return 0;
}