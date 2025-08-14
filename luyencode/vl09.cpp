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

db gt(int n){
    ll s=1;
    for(int i=1; i<=n; ++i){
        s*=i;
    }
    return s;
}

int main() {
    op();
    int x,n;cin>>x>>n;
    db s=0;
    for(int i=1; i<=n; ++i){
        s+=pow(x,i)/gt(i);
    }
    cout<<fixed<<setprecision(2)<<s;
    return 0;
}