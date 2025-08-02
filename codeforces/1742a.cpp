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
		int a,b,c;cin>>a>>b>>c;
		if((a+b==c)||(a+c==b)||(b+c==a))
			cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}
