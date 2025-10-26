#include <stdio.h>

int main(){
    int a; scanf("%d",&a);
    if(a>0&&a<=11) printf("Thieu nhi");
    if(a>11&&a<=25) printf("Thieu nien");
    if(a>25&&a<=50) printf("Trung nien");
    if(a>50) printf("Lao nien");
    return 0;
}
