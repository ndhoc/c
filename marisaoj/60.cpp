#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define vt vector
#define pii pair<int,int>
#define pb push_back
#define endl "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
const int LIM = 1e5+5;
ll kanade(ll a[], ll n){
    ll ans=a[0],M=a[0];
    for(int i=1; i<n; ++i){
        M=max(a[i],M+a[i]);
        ans=max(ans,M);
    }
    return ans;
}

int main() {
    fast;
    ll n; cin>>n;
    ll a[LIM];
    for(int i=0; i<n; ++i) cin>>a[i];
    cout<<kanade(a,n);   
    return 0;
}
