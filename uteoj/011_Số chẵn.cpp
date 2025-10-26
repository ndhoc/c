#include <iostream>

using namespace std;

int main(){
	int n; cin>>n;
	for (int i=n;i<=n && i>0;i--){ // i>0
		if (i%2==0){
			cout<<i<<" ";
		}
	}
	return 0;
}