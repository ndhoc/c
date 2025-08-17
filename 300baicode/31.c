#include <stdio.h>

int main(){
    int a,b;
    scanf("%f%f",&a,&b);
    if(a>b){
        printf("An gioi hon");
        return 0;
    }
    if(a<b){
        printf("Binh gioi hon");
        return 0;
    }
    if(a==b){
        printf("Bang nhau");
        return 0;
    }
    return 0;
}