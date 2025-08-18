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
	for(int i=a; i<=b; ++i){
		for(int j=c; j<=d; ++j)
			if(i==j){
				cout << "YES";
				return 0;
			}
			
	}
	cout << "NO";
	return 0;
}