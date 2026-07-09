//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, ans = 0; cin >> n;

    ans += n / 100;
    n %= 100;

    ans += n / 20;
    n %= 20;

    ans += n / 10;
    n %= 10;

    ans += n / 5;
    n %= 5;

    ans += n / 1;
    n %= 1;

    cout << ans << endl;
    
    return 0;
}