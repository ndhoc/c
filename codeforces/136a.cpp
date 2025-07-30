#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();
	int n; cin >> n;
	int a[105];
	for(int i=1; i<=n; ++i){
		int x; cin >> x;
		a[x] = i;
	}
	for(int i = 1; i <= n ; ++i) cout << a[i] << " ";

	return 0;
}
