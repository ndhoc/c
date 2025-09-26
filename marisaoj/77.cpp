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
    int n,q; cin>>n>>q;
    int a[100005];
    for(int i=1; i<=n; ++i) cin>>a[i];
    while(q--){
        int x;cin>>x;
        auto it = upper_bound(a+1,a+n+1,x);
        if(it==a+1) cout<<-1<<el;
        else cout<<it-a-1<<el;
    }
    return 0;
}
