#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define op() ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	op();
	string s; getline(cin,s);	
	set<char> se;
	for(int i=0; i<s.size(); ++i){
		if(s[i]>='a' && s[i]<='z')
			se.insert(s[i]);
	}
	cout << se.size();
	return 0;
}
