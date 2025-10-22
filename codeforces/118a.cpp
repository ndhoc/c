/**
 *    author: ndhoc
 *    created: 2025-10-22 19:32:26
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s; cin>>s;
    string vowels="UEOAIYueoaiy";
    string ans;
    for(int i=0; i<s.size(); ++i){
        if(vowels.find(s[i]) == string::npos){
            ans+=".";
            ans+=tolower(s[i]);
        }
    }
    cout << ans;
    return 0;
}