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
int binarySearch(int a[], int n, int x){
    int l=1,r=n;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==x) return m;
        else if(a[m]<x) l=m+1;
        else r=m-1;
    }
    return -1;
}

int main() {
    op();
    int n,q; cin>>n>>q;
    int a[100005];
    for(int i=1; i<=n; ++i) cin>>a[i];
    while(q--){
        int x; cin>>x;
        cout<<binarySearch(a,n,x)<<el;
    }
    return 0;
}
