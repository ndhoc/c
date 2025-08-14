#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();
	int n;cin>>n;
	double s = 0;
	for(int i=2; i<=n; ++i){
		s+=(double)1/i;
	}
	cout << fixed << setprecision(4) << s;
	return 0;
}
