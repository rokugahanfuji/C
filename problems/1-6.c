#include <stdio.h>

int main(void){
    int num;
    
    printf("整数を入力してください。：");
    scanf("%d",&num);
    
    printf("その数に10を減じると%dです。",num - 10);
    
    return 0;
}