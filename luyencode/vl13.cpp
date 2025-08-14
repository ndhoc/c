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
    op();int n;cin>>n;
    ll s=0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0) s+=i;
    }
    if(s==n) cout<<"YES";
    else cout<<"NO";
    return 0;
}