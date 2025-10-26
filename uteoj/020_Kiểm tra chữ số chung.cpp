#include <iostream>

using namespace std;

int main(){
	int a,b; cin>>a>>b;
	//tach chu so hang chuc va don vi
	int a1=a/10; //hang chuc
	int a2=a%10; //hang don vi
	//tuong tu vs b
	int b1=b/10;
	int b2=b%10;
	//kiem tra xem co trung hay khong
	if (a==b||(a1==b2 && a2==b1)){
		cout<<0;
	}
	else if (a1==b1 || a1==b2 || a2==b1 || a2==b2){
		cout<<1;
	}
	else cout<<0;
	return 0;
}