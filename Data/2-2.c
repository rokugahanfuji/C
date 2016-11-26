#include <stdio.h>

int main(void){
    int i;
    int a[8] = {1,2,3,4,5,234,43,34};
    int na = sizeof(a)/sizeof(a[0]);
    
    printf("yousosuu:%d\n",na);
    
    for(i=0;i<na;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
}