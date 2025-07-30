/*
	- Bai toan ko cho sap xep
*/
#include <iostream>

using namespace std;

int N, W, w[105];


int main(){
	cin >> N >> W;
	for(int i = 0 ; i < N; ++i){
		cin >> w[i];
	}
	int cnt = 1, sum = 0;
	for(int i = 0; i < N; ++i){
		if(sum + w[i] > W){
			cnt++; //dem xe tai
			sum = 0; //reset trong luong xe
		}
		sum += w[i]; //neu tong trong luong hien tai < W thi tiep tuc cong
		
	}
	cout << cnt;
	return 0;
}
