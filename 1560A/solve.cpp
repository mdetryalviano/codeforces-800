//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    vector<int> liked_numbers;

    for (int i = 1; ; i++) { 
        if (liked_numbers.size() == 1000) {
            break;
        } else {
            if (i % 3 != 0 && i % 10 != 3)
                liked_numbers.push_back(i);
            else
                continue;
        }
    }

    int t; cin >> t;

    while(t--) {
        int k; cin >> k;

        cout << liked_numbers[k - 1] << '\n';
    }
    
    return 0;
}