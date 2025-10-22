/**
 *    author: ndhoc
 *    created: 2025-10-22 21:06:08
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s; cin>>s;
    string ans="hello";
    int j=0;
    for(int i=0; i<s.size()&&j<5; ++i){
        if(s[i]==ans[j]) ++j;
    }
    if(j==5) cout<<"YES";
    else cout<<"NO";
    return 0;
}