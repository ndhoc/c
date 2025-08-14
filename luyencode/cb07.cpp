#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double r; cin >> r;
	const double pi = 3.14;
	cout << fixed << setprecision(3) << (double)(2*pi*r) << " " << (double)(pi*r*r);

	return 0;
}
