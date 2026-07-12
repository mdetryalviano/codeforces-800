//acc
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    string s; getline(cin, s);

    set<char> a;

    for (char i : s)
        if (isalpha(i)) a.insert(i);

    cout << a.size();
    
    return 0;
}