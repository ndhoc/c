#include <iostream>

using namespace std;

int main(){
	int a,b,c,d; cin>>a>>b>>c>>d;
	if( (a>=c && a<=d) || (c>=a && c<=b) ){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
 }
 