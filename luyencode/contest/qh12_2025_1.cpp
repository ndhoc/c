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
    freopen("khuvuichoi.inp","r",stdin);
    freopen("khuvuichoi.out","w",stdout);
    ll a,b; cin>>a>>b;
    ll ans=0,h=0;
    for(int i=a; i<b; ++i){
        int price;
        if(i>=6 && i<12) price=6;
        else price=10;
        h++;
        if(h>4) price/=2;
        ans+=price;
    }
    cout<<ans;
    return 0;
}
