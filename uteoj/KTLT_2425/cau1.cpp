/**
 *    newbie: ndhoc
 *    created: 2026-06-08 20:32:29
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m, n; cin >> m >> n;
    vector<int> a(m), b(n);

    for(int i=0; i<m; ++i) cin >> a[i];
    for(int i=0; i<n; ++i) cin >> b[i];   
    
    int p = m+n-1;
    vector<int> c(p);

    for(int i=0; i<m; ++i) {
        for(int j=0; j<n; ++j) {
            c[i+j] += a[i]*b[j];
        }
    }

    for(int i=0; i<p; ++i) cout << c[i] << " ";
    return 0;
}