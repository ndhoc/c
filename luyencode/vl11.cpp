#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool snt(int n){
	for(int i=2; i*i<=n; ++i){
		if(n%i==0) return false;
	}
	return n>1;
}

int main() {
	op(); int n; cin>>n; if(snt(n)) cout<<"YES";else cout<<"NO";
	return 0;
}
