#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int a,b,c,d; cin>>a>>b>>c>>d;
	if((a==c || a==d) || (b==c || b ==d)) 
		cout<<"YES";
	else
		cout << "NO";
	return 0;
}