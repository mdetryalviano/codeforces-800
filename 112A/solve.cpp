//accm
#include <bits\stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string A, B; cin >> A; cin >> B;

    // simple solution
    // transform(A.begin(), A.end(), A.begin(), ::tolower);
    // transform(B.begin(), B.end(), B.begin(), ::tolower);

    for (char &c : A) {
        c = tolower(static_cast<unsigned char>(c));
    }

    for (char &c : B) {
        c = tolower(static_cast<unsigned char>(c));
    }

    if (A < B) cout << -1;
    else if (A > B) cout << 1;
    else cout << 0;

    return 0;
}