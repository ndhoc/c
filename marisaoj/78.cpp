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
const int maxN = 1e5+1;
int main() {
    fast;
    int n,k; cin>>n>>k;
    int a[maxN];
    for(int i=0; i<n; ++i) cin>>a[i];
    
    ll prefixSum[maxN];
    prefixSum[0]=0;
    for(int i=1; i<=n; ++i){
        prefixSum[i] = prefixSum[i-1]+a[i-1];
    }
    ll ans=0;
    for(int i=1; i<=n; ++i){
        ll target = prefixSum[i]-k;
        int l=0, r=i-1, pos=-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(prefixSum[mid]<=target){
                pos=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        if(pos!=-1) ans+=pos+1;
    }
    cout<<ans;    
    return 0;
}
