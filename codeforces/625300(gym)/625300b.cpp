#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

ll mer(int a[],int l,int m,int r){
	vector<int> x(a+l,a+m+1),y(a+m+1,a+r+1);
	int i=0,j=0;ll cnt=0;
	while(i<x.size()&&j<y.size()){
		if(x[i]<=y[j]){
			a[l++]=x[i++];
		}
		else{
			cnt+=x.size()-i;
			a[l++]=y[j++];
		}
	}
	while(i<x.size()){
		a[l++]=x[i++];
	}
	while(j<y.size()){
		a[l++]=y[j++];
	}
	return cnt;
}

ll merst(int a[],int l,int r){
	ll cnt1=0;
	if(l<r){
		int m=(l+r)/2;
		cnt1+=merst(a,l,m);
		cnt1+=merst(a,m+1,r);
		cnt1+=mer(a,l,m,r);
	}
	return cnt1;
}


const int M=5*1e5+36;
int n,a[M];
int main() {
	op();cin>>n;
	for(int i=0;i<n;++i)
		cin>>a[i];
	cout<< merst(a,0,n-1);
	return 0;
}
