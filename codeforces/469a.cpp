#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main() {
	op();
	int n; cin>>n;
	int p; cin >> p;
	set<int> se;
	for(int i=0; i<p; ++i){
		int x; cin>>x;
		se.insert(x);
	}
	int q; cin>>q;
	for(int i=0; i<q; ++i){
		int y; cin>>y;
		se.insert(y);
	}
	if(n==se.size()) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
	return 0;
}
