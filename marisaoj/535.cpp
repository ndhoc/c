#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);
#define ci cout << fixed << setprecision(3)

int main() {
	op();
	db a,b; char c; cin>>a>>c>>b;
	if(c=='+') ci << a+b;
	if(c=='-') ci << a-b;
	if(c=='*') ci << a*b;
	if(c=='/'){
		if(b==0) cout << "ze";
		else ci << a/b;
	}
	return 0;
}