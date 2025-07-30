#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();
	int n; cin>>n;
	string s; cin>>s;
	set<char> se;
	for(int i=0; i<n; ++i) se.insert(tolower(s[i]));
	if(se.size()==26) cout << "YES";
	else cout << "NO";
	return 0;
}
