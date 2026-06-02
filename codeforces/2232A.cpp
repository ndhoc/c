/**
 *    newbie: ndhoc
 *    created: 2026-06-01 19:57:03
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        
        int median = a[n/2], l=0, r=0;
        for(int i=0; i<n; ++i){
            if(a[i] < median) ++l;
            if(a[i] > median) ++r;
        }
        cout << max(l,r) << "\n";
    }   
    return 0;
}