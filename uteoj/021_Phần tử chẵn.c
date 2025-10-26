#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int c=0;
    for(int i =  0; i < n; ++i){
        int x;scanf("%d",&x);
        if(x%2==0) c++;
    }
    printf("%d",c);
    return 0;

}