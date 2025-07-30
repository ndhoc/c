#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
	int n,c; cin>>n>>c;
	vector<int> a(n);
	for(int i=0; i<a.size(); ++i) cin>>a[i];
	sort(a.rbegin(), a.rend());
	int p=n;
	for(int i=0; i<a.size(); ++i){
		if(a[i]<=c){
			p--;
			c/=2;
		}
	}
	cout << p << endl;
}

int main() {
	op(); int t; cin >> t;
	while(t--) solve();
	return 0;
}
