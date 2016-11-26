#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int a[],int n){
    int i;
    int j;
    int t;
    srand(time(NULL));
    for(i=0;i<n;i++){
        j = rand() % n;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
}

int main(void){
    int *a;
    int n;
    
    int i;
    
    printf("aの要素数:");
    scanf("%d",&n);
    
    a = calloc(n,sizeof(int));
    
    for(i=0;i<n;i++){
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    puts("\n");
    
    shuffle(a,n);
    
    for(i=0;i<n;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
}