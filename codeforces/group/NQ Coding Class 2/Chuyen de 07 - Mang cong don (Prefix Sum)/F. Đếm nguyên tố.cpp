/**
 *    newbie: ndhoc
 *    created: 2026-06-25 18:18:06
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 1000006;

bool snt(int n) {
    for(int i=2; i*i<=n; ++i) {
        if(n%i == 0) return false;
    }
    return n>1;
}

bool prime[MAXN];

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;

    vector<int> pref(MAXN+1);
    for(int i=0; i<MAXN; ++i) {
        if(snt(i)) prime[i] = true;
        pref[i+1] = pref[i] + prime[i];
    }

    
    while(t--) {
        int l, r; cin >> l >> r;
        cout << pref[r+1] - pref[l] << "\n"; 

    }
    return 0;
}