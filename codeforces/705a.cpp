#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();
	int n; cin>>n;
	if(n==1){cout<<"I hate it"; return 0;}
	string s="I hate ";
	for(int i=2; i<=n; ++i){
		if(i%2==0) s+="that I love ";
		else s+="that I hate ";
	}
	s+="it";
	cout << s;
	return 0;
}
