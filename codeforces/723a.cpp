#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int a,b,c;cin>>a>>b>>c;
	cout<<max({abs(a-b),abs(a-c),abs(b-c)});
	return 0;
}
