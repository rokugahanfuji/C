//Struct for data array of phisical examination.
#include <stdio.h>
#include <stdlib.h>

#define VMAX 21

typedef struct{
    char    name[20];
    int     height;
    double  vision;
} PhysCheck;

double ave_height(const PhysCheck dat[],int n){
    int i;
    double sum = 0;
    
    for(i=0;i<n;i++){
        sum += dat[i].height;
    }
    return sum / n;
}

void dist_vision(const PhysCheck dat[],int n,int dist[]){
    int i;
    
    for(i=0;i<VMAX;i++){
        dist[i] = 0;
    }
    for(i=0;i<n;i++){
        if(dat[i].vision >= 0.0 && dat[i].vision <VMAX /10.0){
            dist[(int)(dat[i].vision * 10)]++;
        }
    }
}


int main(){
    int i;
    PhysCheck x[] = {
        {"AKASAKA Tadao",   162,0.3},
        {"KATOH Tomiaki"    173,0.7},
    };
    int nx = sizeof(x)/sizeof(x[0]);
    int vdist[MAX];
    
    puts("")
}