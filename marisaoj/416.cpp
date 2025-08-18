#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	ll d; cin>>d;
	ll h=d/3600;
	d%=3600;
	int m=d/60;
	d%=60;
	cout <<h<<" "<<m<<" "<<d;
	return 0;
}