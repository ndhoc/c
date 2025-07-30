#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
double sum,n,len = 1e-1;
int main() {
	op();
	cin >> n;
	for(int i = 0; i < n; ++i){
		int x; cin >> x;
		sum += x;
	}
	cout << fixed << setprecision(12) << sum/n;
	return 0;
}
