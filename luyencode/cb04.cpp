#include <iostream>
#include <iomanip>
using namespace std;


int main(){
	double a,b; cin>>a>>b;
	cout<<a+b<<endl;
	cout<<a-b<<endl;
	cout<<a*b<<endl;
	if(b==0){
		cout<<"ERROR";
	}
	else{
		double e = a/b;
		cout << fixed <<setprecision(2) << e << endl;
	}
	return 0;
}
