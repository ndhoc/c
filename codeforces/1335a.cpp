#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int t;cin>>t;
	while(t--){
		db n;cin>>n;
		ll res=ceil((n/2)-1);
		cout<<res<<el;
	}
	return 0;
}
