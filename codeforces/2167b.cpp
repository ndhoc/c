/**
 *    author: ndhoc
 *    created: 2025-10-28 21:40:09
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s,t; cin>>s>>t;
        map<char, int> mp;
        map<char, int> mp2;
        for(int i=0; i<n; ++i){
            mp[s[i]]++;
            mp2[t[i]]++;
        }
        bool ok=false;
        for(char c='a'; c<='z'; ++c){
            if(mp[c]!=mp2[c]) ok=true;
        }
        if(ok) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
