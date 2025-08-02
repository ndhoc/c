#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define db double
#define pb push_back
#define el "\n"
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

string a,b,c; int s[256],z[256];
int main() {
	op();cin>>a>>b>>c;
	for(char x:a) s[x]++;
	for(char x:b) s[x]++;
	for(char x:c) z[x]++;
	for(char x='A';x<='Z';++x)
		if(s[x]!=z[x]){
			cout<<"NO";
			return 0;
		}
	cout<<"YES";
	return 0;
}
