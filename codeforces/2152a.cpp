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
#define op() ios_base::sync_with_stdio(0);cin.tie(0);
const int MOD = 1e9+7;
const int LIM = 1e5+5;

void solve(int n){
    vt<int> a(n);
    for(int i=0; i<n; ++i) cin>>a[i];
    sort(a.begin(),a.end());
    int k=n;
    for(int i=0; i<n-1; ++i){
        if(a[i]==a[i+1]) k--;
    }
    cout<<k*2-1<<endl;
}

int main() {
    op();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        solve(n);
    }
    return 0;
}
