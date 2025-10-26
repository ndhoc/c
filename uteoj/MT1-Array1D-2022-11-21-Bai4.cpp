#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int index=-1;
	for(int i=0;i<n;i++){
		int dem=0;
		int h=a[i];
		for(int j=0;j<n;j++){
			if(h==a[j]){
				dem++;
			}
		}
		if(dem>1){
			index=i;
			break;
		}
	}
	cout<<index;
	return 0;
}