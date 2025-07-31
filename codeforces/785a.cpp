#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	int n;cin>>n;
	int total=0;
	while(n--){
		string s; cin>>s;
		if(s=="Tetrahedron")
			total+=4;
		else if(s=="Cube")
			total+=6;
		else if(s=="Octahedron")
			total+=8;
		else if(s=="Dodecahedron")
			total+=12;
		else total+=20;
	}
	cout<<total;
	return 0;
}
