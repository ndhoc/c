#include <bits/stdc++.h>
using namespace std;

const int M = 100004;

int a[M],b[M],g[M],k[M],n,x,y,res=-1;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    //freopen("hoc0g.inp", "r", stdin);
    cin >> n;
    for(int i=1; i<=n; ++i) cin>>a[i]>>b[i]>>g[i]>>k[i];
    cin >> x >> y;
    for(int i=1; i<=n; ++i){
        if(x>=a[i] && x<=a[i]+g[i] && y>=b[i] && y<=b[i]+k[i])res=i;
    }
    cout<<res;
    return 0;
}