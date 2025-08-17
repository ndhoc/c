#include <stdio.h>

int maxx(int a, int b){
    return (a>b)?a:b;
}

int main(){
    int a,b,c; scanf("%d%d%d",&a,&b,&c);
    printf("%d", maxx(a,(maxx(b,c))));
    return 0;
}