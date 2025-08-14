#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	double a, b; cin >> a >> b;

	double x = a + b;
	double y = a - b;
	double z = a * b;
	

	cout << x << "\n";
	cout << y << "\n";
	cout << z << "\n";
	if(b == 0) cout << "ERROR";
	else{
		double t = (double)(a / b);
		cout << fixed << setprecision(2) << t;
	}
	return 0;
}
