#include <iostream>
#include <map>

using namespace std;

int main(){
	int x;
	map<int, bool> checkVar;
	for(int i = 1; i <= 28; ++i){
		cin >> x;
		checkVar[x] = true;
	}
	for(int i = 1; i <= 30; ++i){
		if(!checkVar[i]) cout << i << " ";
	}
	return 0;
}
