#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int n,h[136],a[236],cnt;

int main() {
	op();cin>>n;
	for(int i=0; i<n; ++i)
		cin>>h[i]>>a[i];
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(a[i]==h[j]) cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
