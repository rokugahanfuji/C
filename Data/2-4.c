#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int *a;
    int na;
    
    printf("yousosu:");
    scanf("%d",&na);
    
    a = calloc(na,sizeof(int));
    
    if(a == NULL){
        puts("Failed...");
    }else{
        printf("print %d numbers.\n",na);
        for(i = 0;i < na;i++){
            printf("a[%d] : ",i);
            scanf("%d",&a[i]);
        }
        
        printf("yousonoatai\n");
        for(i = 0;i < na;i++){
            printf("a[%d] = %d\n",i,a[i]);
        }
        printf("%d",*a);
    }
}