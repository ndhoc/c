/**
 *    author: ndhoc
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    string s; cin>>s;
    int n=s.size(), cnt=0;
    for(int i=0; i<n; ++i){
        if(isupper(s[i])) cnt++;
    }
    if(cnt==n || cnt==n-1 && islower(s[0])){
        for(int i=0; i<n; ++i){
            if(isupper(s[i])) s[i]=tolower(s[i]);
            else s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}
