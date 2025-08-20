#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    if(t>=0&&t<=20){
        printf("Mua Dong");
    }
    if(t>20&&t<=25){
        printf("Mua Xuan");
    }
    if(t>25&&t<=30){
        printf("Mua Thu");
    }
    if(t>30){
        printf("Mua Ha");
    }
    return 0;
}