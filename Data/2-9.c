//Count the number of Prime within 1000.(No.1)

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n;
    unsigned long counter = 0;
    
    for(n=2;n<=1000;n++){
        for(i=2;i<n;i++){
            counter++;
            if(n % i == 0)
                break;
        }
        if(n == i)
            printf("%d\n",n);
    }
    
    printf("割り算の数:%lu\n",counter);
    return 0;
}