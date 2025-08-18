#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	db t; cin>>t;
	if(t>=9.0) cout << "VERY TOXIC";
	else if(t>=5.0) cout << "TOXIC";
	else cout << "SAFE";
	return 0;
}