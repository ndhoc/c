#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[100];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int sum=0,sumMax=a[0];
    for(int i=0;i<n;++i){
        sum+=a[i];
        if(sum>sumMax){
            sumMax=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<sumMax<<"\n";
    return 0;
}