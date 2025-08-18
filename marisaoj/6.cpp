#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int a,b,c; cin>>a>>b>>c;
	vector<int> arr;
	arr.pb(a); arr.pb(b); arr.pb(c);
	sort(arr.begin(),arr.end());
	for(int i=0; i<3; ++i) cout << arr[i] << " ";
	return 0;
}