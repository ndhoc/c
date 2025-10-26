#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,a,b,c,d;
    cin>>x>>a>>b>>c>>d;
    int tienDien=0;
    if(x<51){
        tienDien=x*a;
    }
    else if(x<101){
        tienDien=50*a+(x-50)*b;
    }
    else if(x<151){
        tienDien=50*a+50*b+(x-100)*c;
    }
    else{
        tienDien=50*a+50*b+50*c+(x-150)*d;
    }
    cout<<tienDien<<"\n";
    return 0;
}