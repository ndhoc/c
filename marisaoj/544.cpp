#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

void solve(int n, string s=""){
	if(s.size()==n){
		cout<<s<<el;
		return;
	}
	for(char c='A';c<='C';++c){
		if(s.empty()||s.back()!=c)
			solve(n,s+c);
	}
}

int main() {
	op();
	int n;cin>>n;
	solve(n);
	return 0;
}