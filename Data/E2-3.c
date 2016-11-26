#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[],int n){
    int i;
    int max = a[0];
    for(i = 1;i<n;i++){
        if(a[i] > max) max = a[i];
    } 
    return max;
}

int minof(const int a[],int n){
    int i;
    int min = a[0];
    for(i = 1;i<n;i++){
        if(a[i] < min) min = a[i];
    } 
    return min;
}

int sumof(const int a[],int n){
    int i;
    int sum;
    
    for(i=0;i<n;i++){
        sum += a[i];
    }
    return sum;
}

int aveof(const int a[],int n){
    int i;
    int sum;
    
    for(i=0;i<n;i++){
        sum += a[i];
    }
    return sum / n;
}

int main(void){
    int i;
    int *height;
    int number;
    
    printf("number:");
    scanf("%d",&number);
    
    height = calloc(number,sizeof(int));
    printf("Input %d height,\n",number);
    for(i = 0;i<number;i++){
        printf("height[%d]:",i);
        scanf("%d",&height[i]);
    }
    printf("平均値:%d\n",aveof(height,number));
    free(height);
    return 0;
}