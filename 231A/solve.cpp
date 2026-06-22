//acc
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n,a,b,c,ans=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(a+b+c>=2){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}