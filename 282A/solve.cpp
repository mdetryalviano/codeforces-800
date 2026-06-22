//acc
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n, pv = 0, mv = 0, ans = 0;
    string str;
    vector<char> sc = {'-','+'};

    cin>>n;

    while (n--) {
        cin >> str;
        for (int i = 0; i <= str.length() - 1; i++) {
            if (str[i] == sc[0]) mv++;
            else if(str[i] == sc[1]) pv++;
        }
    }

    if (pv >= 2) ans += pv/2;
    if (mv >= 2) ans -= mv/2;

    cout << ans;

    return 0;
}