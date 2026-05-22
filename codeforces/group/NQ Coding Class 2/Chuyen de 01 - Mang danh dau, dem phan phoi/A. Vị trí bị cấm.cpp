/**
 *    newbie: ndhoc
 *    created: 2026-05-22 20:45:19
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<int> a(n+1);
    
    for(int i=1; i<=n; ++i) cin >> a[i];
    int m; cin >> m;

    vector<int> b(n+1, 0);
    for(int i=1; i<=m; ++i){
        int x; cin >> x;
        b[x] = 1;
    }
    
    for(int i=1; i<=n; ++i){
        if(b[i] == 0) cout << a[i] << " ";
    }
    return 0;
}