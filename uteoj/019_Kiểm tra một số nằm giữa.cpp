#include <iostream>

using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	//bat dau bai toan
	/*co mot so trong khoang thi in ra 1
	con in ra ko co hai truong hop
	TH1: Hai so thoa man dk
	TH2: Hai so ko thoa man dk */
	if ( (a>=10 && a<=20) && (b>=10 && b<=20) ){
		cout<<0;
	}
	else if ( (a>=10 && a<=20) || (b>=10 && b<=20) ){
		cout<<1;
	}
	else cout<<0;
	return 0;
}