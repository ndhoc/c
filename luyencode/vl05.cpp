#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
	int n;cin>>n;
	int s=0;
	for(int i=1; i<= 3*n+1; ++i){
		if(i%2==0) s-=i;
		else s+=i;
	}
	cout << s;
}

int main() {
	op(); solve();

	return 0;
}
