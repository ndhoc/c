#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    do{
        cin>>n;
    }while(n<0||n>100);
    int a[100];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int max1=a[0],max2=INT_MIN;
    for(int i=0;i<n;++i){
        if(a[i]>max1){
            max1=a[i];
        }
    }
    for(int i=0;i<n;++i){
        if(a[i]<max1 && a[i]>max2){
            max2=a[i];
        }
    }
    if(max2==INT_MIN){cout<<-1<<"\n";}
    else cout<<max2<<"\n";
    return 0;
}