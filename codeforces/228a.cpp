#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	op();
	int a,b,c,d; cin>>a>>b>>c>>d;
	set<int> se;
	se.insert(a); se.insert(b); se.insert(c); se.insert(d);
	cout << 4-se.size(); 
	return 0;
}
