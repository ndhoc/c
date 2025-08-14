#include <bits/stdc++.h>
using namespace std;

int main(){
	double a, b, c; cin >> a >> b >> c;
	if(a == 0){
		if(b == 0){
			if(c == 0) cout << "WOW";
			else cout << "NO";
		}
		else cout << fixed << setprecision(2) << -(double)(c/b);
	}
	else{
		double del = b*b - 4*a*c;
		if(del > 0){
			double x1 = (-b-sqrt(del))/(2.0*a);
			double x2 = (-b+sqrt(del))/(2.0*a);
			cout << fixed << setprecision(2) << x1 << " " << x2;
		}
		else if(del < 0) cout << "NO";
		else cout << fixed << setprecision(2) << (-b/(2.0*a));
	}

	return 0;
}
