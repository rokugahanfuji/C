//Struct for data array of phisical examination.
#include <stdio.h>
#include <stdlib.h>

#define VMAX 21

int mdays[][12] = {
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31},
};

int isleap(int year){
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

typedef struct{
    int y;
    int m;
    int d;
} Date;

Date Dateof(int y,int m,int d){
    Date date;
    
    date.y = y;
    date.m = m;
    date.d = d;
    
    return date;
}

Date After(Date x,int n){
    while(n+x.d > mdays[isleap(x.y)][x.m-1]){
        n = n - (mdays[isleap(x.y)][x.m-1] - x.d);
        x.d = 1;
        x.m++;
        if(x.m > 12){
            x.m = 1;
            x.y++;
        }
    }
    x.d = n;
    return x;
}



int main(){
    Date date = Dateof(2016,12,11);
    date = After(date,30);
    
    printf("%d/%d/%d\n",date.y,date.m,date.d);
}