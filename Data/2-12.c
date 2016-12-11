//Count a number of elapsed days of a year.
#include <stdio.h>
#include <stdlib.h>

int mdays[][12] = {
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31},
};

int isleap(int year){
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int dayofyear(int y,int m,int d){
    int i;
    int days = d;
    
    for(i = 1;i < m;i++){
        days += mdays[isleap(y)][i-1];
    }
    return days;
}

int main(){
    int year,month,day;
    int retry;
    
    do {
        printf("YEAR:");    scanf("%d",&year);
        printf("MONTH:");   scanf("%d",&month);
        printf("DAY:");     scanf("%d",&day);
        
        printf("%d\n",dayofyear(year,month,day));
        
        printf("RETRY?0/1:");
        scanf("%d",&retry);
    } while (retry == 1);
    
    return 0;
}