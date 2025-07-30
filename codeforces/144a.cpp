#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();
	int n; cin>>n; int a[136];
	int m = INT_MAX, M = INT_MIN;
	int mi, Mi;
	for(int i=0; i<n; ++i){
		cin >> a[i];
		if(a[i]>M){
			M=a[i];
			Mi=i;
		}
		if(a[i]<=m){
			m=a[i];
			mi=i;
		}
	}
	if(mi<Mi) cout << Mi-1+n-mi-1;
	else cout << Mi-1+n-mi; 
	return 0;
}
