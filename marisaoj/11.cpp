#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	ll n; cin>>n;
	ll c = sqrt(n);
	if(c*c==n) cout << "YES";
	else cout << "NO";
	return 0;
}