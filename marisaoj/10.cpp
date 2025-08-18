#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
	db kc = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	cout << fixed <<setprecision(2) <<kc;
	return 0;
}