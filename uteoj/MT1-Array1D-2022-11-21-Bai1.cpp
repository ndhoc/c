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
    int maxVal=a[0];
    int vtDau=0,vtCuoi=-1;
    for(int i=0;i<n;++i){
        if(a[i]>maxVal){
            maxVal=a[i];
            vtDau=i;
        }
    }
    for(int i=vtDau+1;i<n;++i){
        if(a[i]==maxVal){
            vtCuoi=i;
        }
    }
    if(vtCuoi!=-1){
        cout<<vtCuoi-vtDau<<"\n";
    }
    else cout<<0<<"\n";
    return 0;
}