/**
 *    newbie: ndhoc
 *    created: 2026-05-01 08:44:45
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    ll a[51][51];
    a[0][0] = 1;
    for(int i=1; i<n; ++i){
        a[i][0] = 1;
        for(int j=1; j<n; ++j){
            a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(a[i][j]!=0) cout<<a[i][j]<<' ';
        }
        cout << "\n";
    }
    return 0;
}
