//整数を2-36進数に基数変換
#include <stdio.h>

//整数値xをn進数進数に変換して配列dに下位桁から格納
int card_convr(unsigned x,int n,char d[]){
    char dchar[] = "0123456789ABVDEFGHIJKLMNOPQRSTUVWXYZ";
    int digits = 0;
    int y = x;
    
    while(y){
        y /= n;
        digits++;
    }
    y = digits;
    
    if(x == 0){
        d[--digits] = dchar[0];
    }else{
        while(x){
            d[--digits] = dchar[x % n];
            x /= n;
        }
    }
    return y;
}

int main(void){
    int i;
    unsigned no;
    int cd;
    int dno;
    char cno[512];
    int retry;
    
    puts("10進数->?進数");
    
    do {
        printf("変換する整数：");
        scanf("%u",&no);
        
        do{
            printf("?進数:");
            scanf("%d",&cd);
        } while(cd < 2 || cd >36);
        
        dno = card_convr(no,cd,cno);
        
        printf("%d:",cd);
        for(i = 0;i < dno; i++){
            printf("%c",cno[i]);
        }
        
        printf("\nRETRY? Y/N ->1/0:");
        scanf("%d",&retry);
    }while(retry);
    return 0;
}