#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    if(t>=2&&t<=4){
        printf("Mua Xuan");
    }
    if(t>=5&&t<=7){
        printf("Mua Ha");
    }
    if(t>=8&&t<=10){
        printf("Mua Thu");
    }
    if((t>=11&&t<=12) || t==1){
        printf("Mua Dong");
    }
    return 0;
}