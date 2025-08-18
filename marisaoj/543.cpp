#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

void binStr(int n, string s=""){
	if(s.size()==n){
		cout<<s<<"\n";
		return;
	}
	binStr(n,s+"0");
	binStr(n,s+"1");
}

int main() {
	op();int n; cin>>n;
	binStr(n);
	return 0;
}