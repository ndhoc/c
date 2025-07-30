#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();
	int t;cin>>t;
	while(t--){
		int a,b; cin>>a>>b;
		if(a%b==0) cout<<0<<"\n";
		else cout<<b-(a%b)<<"\n";
	}
	return 0;
}
