/*
  https://codeforces.com/contest/2125/problem/A
  #ndhoc
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();int t;cin>>t;
	while(t--){
		string s;cin>>s;
		sort(s.rbegin(),s.rend());
		cout<<s<<el;
	}
	return 0;
}
