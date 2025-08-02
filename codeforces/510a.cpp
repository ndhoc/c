#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op(); int n,m; cin>>n>>m;
	bool r=true;
	for(int i=1; i<=n; ++i){
		if(i%2!=0)
			for(int j=1;j<=m;++j)
				cout<<"#";
		else
			if(r){
				for(int j=1; j<m; ++j)
					cout<<".";
				cout<<"#";
				r=false;
			}
			else{
				cout<<"#";
				for(int i=2; i<=m; ++i)
					cout<<".";
				r=true;
			}
		cout<<el;
	}
	return 0;
}
