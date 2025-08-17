#include <stdio.h>

int main(){
    float a,b;
    scanf("%f%f",&a,&b);
    if(a>b){
        printf("An gioi hon");
    }
    if(a<b){
        printf("Binh gioi hon");
    }
    if(a==b){
        printf("Bang nhau");
    }
    return 0;
}