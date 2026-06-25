/**
 *    newbie: ndhoc
 *    created: 2026-06-10 14:59:29
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m; cin >> n >> m; 
    vector<int> a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a.begin(), a.end());    

    int cnt = 0;
    for(int i=0; i<n; ++i) {
        
        int aj = m - a[i];
        int l = 0, r = n-1;
        while(l <= r) {
            int m = l + (r - l) / 2;

            if(a[m] <= aj) {
                cnt++;
                l = m + 1;    
            }
            else r = m - 1;
        }
    }

    cout << cnt+2;
    return 0;
}