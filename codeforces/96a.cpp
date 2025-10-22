/**
 *    author: ndhoc
 *    created: 2025-10-22 20:25:36
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ok;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s; cin>>s;
    int c0=0,c1=0;
    for(int i=0; i<s.size(); ++i){
        if(s[i]=='0'){
            c1=0;
            c0++;
            if(c0==7){
                ok=true;
                break;
            }
        }
        else{
            c0=0;
            c1++;
            if(c1==7){
                ok=true;
                break;
            }
        }
    }
    if(ok) cout<<"YES";
    else cout<<"NO";
    return 0;
}