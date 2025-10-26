/**
 *    author: ndhoc
 *    created: 2025-10-26 10:08:53
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s; cin>>s;
    vector<string> ans;
    string cur;
    for(int i=0; i<s.size(); ){
        if(i+3<=s.size() && s.substr(i,3)=="WUB"){
            i+=3;
            if(cur.size()) ans.push_back(cur);
            cur="";
        }
        else{
            cur+=s[i];
            i++;
        }
    }
    if(cur.size()) ans.push_back(cur);
    for(int i=0; i<ans.size(); ++i) cout<<ans[i]<<" ";
    return 0;
}