#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define vt vector
#define pii pair<int,int>
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
    op();
    freopen("demso.inp","r",stdin);
    freopen("demso.out","w",stdout);
    ll a,b,c; cin>>a>>b>>c;
    ll num=b-a+1;
    ll div=b/c-(a-1)/c;
    ll ans=num-div;
    cout<<ans;
    return 0;
}
