#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op(); int k,l,m,n,d; cin>>k>>l>>m>>n>>d;
	int cnt=0;
	for(int i=1; i<=d; ++i){
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
		cnt++;
	}
	cout<<cnt;
	return 0;
}
