//acc
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string S; cin >> S;
    int upper_count = 0, lower_count = 0;

    for (char s : S) {
        if (s != toupper(s))
            lower_count++;
        else
            upper_count++;
    }

    if (upper_count < lower_count || upper_count == lower_count)
        transform(S.begin(), S.end(), S.begin(), ::tolower);
    else if (upper_count > lower_count)
        transform(S.begin(), S.end(), S.begin(), ::toupper);

    cout << S << '\n';

    return 0;
}