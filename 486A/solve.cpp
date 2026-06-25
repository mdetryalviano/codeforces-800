//acc
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// tle
// ll f(ll n) {
//     ll res = 0;
//     ll form = abs(pow(-1, n)*n);

//     for (ll i = 1; i <= form; i++) {
//         if (i % 2 != 0)
//             res -= i;
//         else
//             res += i;
//     }

//     return res;
// }

ll f(ll n) {
    ll res = 0;

    if (n & 1)
        res = (n-1)/2-n;
    else
        res = n/2;

    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    ll N; cin >> N;

    ll ans = f(N);
    cout << ans;
    
    return 0;
}