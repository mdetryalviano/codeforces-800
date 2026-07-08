//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n, cops = 0, fail = 0; cin >> n;
    
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        if (a > 0)
            cops += a;
        else if (a == -1) {
            if (cops > 0)
                cops--;
            else
                fail++;
        }
    }

    cout << fail;

    return 0;
}