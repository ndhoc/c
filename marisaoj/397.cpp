#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int a,b; cin>>a>>b;
	if(a==0){
		if(b==0) cout <<"INFINITE SOLUTIONS";
		else cout << "NO SOLUTION";
	}
	else{
		if(b%a!=0) cout << "NO SOLUTION";
		else cout << -b/a;
	}
	return 0;
}