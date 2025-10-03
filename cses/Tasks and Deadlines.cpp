#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ull unsigned long long
#define db double
#define vt vector
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
const int LIM = 1e6+36;
int main() {
    fast;
    int n; cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0; i<n; ++i) cin>>a[i].fi>>a[i].se;
    sort(a.begin(),a.end());
    ll ans = 0,t=0;
    for(int i=0; i<n; ++i){
        t+=a[i].fi;
        ans+=a[i].se-t;
    }
    cout << ans;
    return 0;
}
