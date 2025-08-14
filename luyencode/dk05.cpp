#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n; cin >> n;

	if(sqrt(n) - (int)(sqrt(n)) == 0) cout << "YES";
	else cout << "NO";
	
	return 0;
}
