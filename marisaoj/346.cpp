#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int n;ll k,a[36];
bool checkVar=false;
void dfs(int i,ll sum){
	if(checkVar) return;
	if(sum==k){checkVar=true;return;}
	if(i==n||sum>k){checkVar=false;return;}
	//ko chon a[i];
	dfs(i+1,sum);
	dfs(i+1,sum+a[i]);
}


int main() {
	op();cin>>n>>k;
	for(int i=0;i<n;++i) cin>>a[i];
	dfs(0,0);
	cout<<(checkVar?"YES":"NO");
	return 0;
}