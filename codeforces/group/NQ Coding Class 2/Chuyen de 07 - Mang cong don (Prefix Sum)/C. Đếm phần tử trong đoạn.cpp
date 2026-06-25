/**
 *    newbie: ndhoc
 *    created: 2026-06-25 17:46:32
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 100005;

int freq[MAXN], pref[MAXN];


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, t; cin >> n >> t;
    
    for(int i=0; i<n; ++i){
        int x; cin >> x; 
        ++freq[x];
    }

    for(int i=0; i<MAXN; ++i) {
        pref[i+1] = pref[i] + freq[i];
    }
    
    while(t--) {
        int l, r; cin >> l >> r;
        
        cout << pref[r+1] - pref[l] << "\n";
    }
    return 0;
}