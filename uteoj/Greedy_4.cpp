/*
	- Thuat toan sap xep "hai con tro"
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool checkVar(int n, int m, vector<string> s1, vector<string> s2){
	int i = 0, j = 0; // i xau chinh, j xau con
	while(i < n && j < m){
        if(s1[i] == s2[j]) j++;
	    i++;
    }
	return (j == m);
}

int main(){
	int n, m; cin >> n >> m; cin.ignore();
	vector<string> s1(n), s2(m);
	
	for(int i = 0; i < n; ++i) cin >> s1[i];
	for(int i = 0; i < m; ++i) cin >> s2[i];
	
	if(checkVar(n,m,s1,s2)) cout <<"YES";
	else cout << "NO";
	return 0;
}
