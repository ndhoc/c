#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();int n;cin>>n;
	const int M=1e5+36;
	int a[M];
	int s=0,cnt=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]!=-1) s+=a[i];
		else{
			if(s>0) s-=1;
			else cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
