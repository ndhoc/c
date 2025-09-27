#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define vt vector
#define pii pair<int,int>
#define pb push_back
#define el "\n"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
const int LIM = 1e5+5;

int main() {
    fast;
    int n,q; cin>>n>>q;
    int a[LIM];
    ll prefix[LIM];
    prefix[0]=0;
    for(int i=1; i<=n; ++i){
        cin>>a[i];
        prefix[i]=prefix[i-1]+a[i];
    }
    while(q--){
        int l,r; cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<el;
    }
    return 0;
}
