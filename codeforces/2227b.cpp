/**
 *    newbie: ndhoc
 *    created: 2026-05-09 19:06:56
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ans = 0;
        for(int i=0; i<n; ++i){
            char x; cin >> x;
            if(x == '(') ans+=1;
            else ans-=1;
        }
        cout << ((ans==0) ? "YES\n":"NO\n");
    }   
    return 0;
}