#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int t;cin>>t;
	while(t--){
		int n,s=0,zr=0;cin>>n;
		for(int i=0; i<n; ++i){
			int a;cin>>a;s+=a;
			if(a==0) ++zr;
		}
		cout<<s+zr<<endl;
	}
	return 0;
}
