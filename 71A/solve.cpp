//acc
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define arr array

int main(){
    int n;
    string w,substr,s,e;
    cin>>n;
    while(n--){
        cin>>w;
        substr=w.substr(1,w.length()-1);
        if(substr.length()>=10){
            s=w.substr(0,1);
            e=w.substr(w.length()-1,1);
            cout<<s<<substr.length()-1<<e<<"\n";
        }else{
            cout<<w<<"\n";
        }
    }
    return 0;
}