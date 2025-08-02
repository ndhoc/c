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
		string s;cin>>s;
		int k=s.size();
		vector<int> a;
		for(int i=0;i<k;++i)
			if(s[i]!='0')
				a.pb((s[i]-'0')*pow(10,k-i-1));
		cout<<a.size()<<el;
		for(int i=0;i<a.size();++i)
			cout<<a[i]<<" ";
		cout<<el;
	}
	return 0;
}
