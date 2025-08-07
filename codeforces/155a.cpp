#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int n,m,M,cnt;
int main() {
	op();cin>>n;
	int p;cin>>p;m=p;M=p;
	for(int i=1;i<n;++i){
		cin>>p;
		if(p>m){
			m=p;cnt++;
		}
		if(p<M){
			M=p;cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
