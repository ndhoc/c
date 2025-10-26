#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n>>x;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int kc_min=INT_MAX;
	int vtdau=-1;
	for(int i=0;i<n;i++){
		if(a[i]!=x){
			int kc=abs(a[i]-x);
			if(kc<kc_min){
				kc_min=kc;
				vtdau=i;
			}
		}
	}
	cout<<vtdau;
	return 0;
}