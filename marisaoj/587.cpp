#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int x,a,b,c,d,s; cin>>x>>a>>b>>c>>d;
	if(x<=50) s=a*x;
	else if(x<=100) s=50*a+(x-50)*b;
	else if(x<=150) s=50*a+50*b+(x-100)*c;
	else s=50*(a+b+c)+(x-150)*d;
	cout <<s;
	return 0;
}