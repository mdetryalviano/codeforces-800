//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) cin >> a[i];

    int sereja = 0, dima = 0, it = 0, left = 0, right = n - 1;

    while (left <= right) {
        if (a[left] > a[right]) {
            (it % 2 != 1) ? sereja += a[left] : dima += a[left];
            left++;
        } else {
            (it % 2 != 1) ? sereja += a[right] : dima += a[right];
            right--;
        }
        it++;
    }

    cout << sereja << " " << dima << '\n';
    
    return 0;
}