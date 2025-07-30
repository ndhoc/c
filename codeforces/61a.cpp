#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();
	string s,t,ans=""; cin>>s>>t;
	for(int i=0; i<s.size(); ++i){
		if(s[i]!=t[i]) ans+="1";
		else ans+='0';
	}
	cout << ans;

	return 0;
}
