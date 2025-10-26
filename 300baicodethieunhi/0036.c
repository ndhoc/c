#include <stdio.h>

int main(){
    float a,b; scanf("%f%f",&a,&b);
    float c=(a+b*2)/3;
    if(c>=8) printf("%0.1f\nGioi",c);
    if(c>=6.5&&c<8) printf("%0.1f\nKha",c);
    if(c>=5&&c<6.5) printf("%0.1f\nTrung binh",c);
    if(c>=3.5&&c<5) printf("%0.1f\nYeu",c);
    if(c<3.5) printf("%0.1f\nKem",c);
    return 0;
}
