#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();
	int n;cin>>n;
	int s = (n*(n+1))/2;
	cout << (s-1)+2*n;
	return 0;
}
