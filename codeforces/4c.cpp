/**
 *    author: ndhoc
 *    created: 2025-10-26 10:30:38
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    map<string,int> mp;
    while(n--){
        string s; cin>>s;
        mp[s]++;
        if(mp[s]>1) cout<<s<<mp[s]-1<<"\n";
        else cout<<"OK\n";
    }
    return 0;
}