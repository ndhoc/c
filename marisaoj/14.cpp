#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	char a,b; cin>>a>>b;
	a=tolower(a); b=tolower(b);
	int posa=(a-'a');
	int posb=(b-'a');
	cout << posb-posa-1;
	return 0;
}