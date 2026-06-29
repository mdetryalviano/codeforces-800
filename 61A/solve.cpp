//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string a, b; cin >> a >> b;

    for (int i = 0; i <= a.length() - 1; i++) {
        if (a[i] != b[i])
            cout << "1";
        else
            cout << "0";
    }

    cout << "\n";

    return 0;
}