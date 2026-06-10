/**
 *    newbie: ndhoc
 *    created: 2026-06-10 14:59:29
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n; 
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a.begin(), a.end());    
    int x; cin >> x;

    int cnt = 0;
    for(int i=0; i<n; ++i) {
        
        int aj = x - a[i];

        auto lb = lower_bound(a.begin()+i+1, a.end(), aj);
        auto ub = upper_bound(a.begin()+i+1, a.end(), aj);

        cnt += (ub-lb);
    }

    cout << cnt;
    return 0;
}