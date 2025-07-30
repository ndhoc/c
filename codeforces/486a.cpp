#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();ll n; cin>>n;
	if(n%2==0) cout << n/2;
	else cout << -(n+1)/2;
	return 0;
}