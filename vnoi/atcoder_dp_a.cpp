#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
	vector<int> a(n), f(n, 0);
	
	for(int i = 0; i < n; ++i) cin >> a[i];
	
	f[0] = 0;
	f[1] = abs(a[0] - a[1]);
	
	for(int i = 2; i < n; ++i){
		f[i] = min(f[i-1] + abs(a[i-1] - a[i]), f[i-2] + abs(a[i-2] - a[i]));
	}
	
	cout << f[n-1];
    return 0;
}
