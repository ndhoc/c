#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();int t;cin>>t;
	while(t--){
		ll a,b,k;cin>>a>>b>>k;
		ll d=__gcd(a,b);
		a/=d;b/=d;
		if(max(a,b)<=k) cout<<1<<el;
		else cout<<2<<el;
	}
	return 0;
}
