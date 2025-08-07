#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int n,k;cin>>n>>k;
	int t=0,h=240,i=1;
	while(h-t>=k && i<=n){
		t+=5*i;
		if(h-t<k) break;
		i++;
	}
	cout<<i-1;
	return 0;
}
