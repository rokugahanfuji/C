#include <stdio.h>
#include <stdlib.h>

void array_copy(int a[],const int b[],int n){
    int i;
    for(i=0;i<n;i++){
        a[i] = b[n-i-1];
    }
}

int main(void){
    int *a;
    int *b;
    int n;
    
    int i;
    
    printf("bの要素数:");
    scanf("%d",&n);
    
    a = calloc(n,sizeof(int));
    b = calloc(n,sizeof(int));
    
    for(i=0;i<n;i++){
        printf("b[%d]:",i);
        scanf("%d",&b[i]);
    }
    puts("\n");
    
    array_copy(a,b,n);
    
    for(i=0;i<n;i++){
        printf("a[%d]:%d\n",i,a[i]);
        printf("b[%d]:%d\n",i,b[i]);
    }
}