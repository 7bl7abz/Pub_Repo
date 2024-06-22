#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    int i,N,count=0;
    double x,y,r,error;
    printf("How many trials?? ");
    scanf("%d",&N);
    srand((unsigned)time(NULL));
    for(i=0;i<N;i++){
        x=rand()/(RAND_MAX+1.0);
        y=rand()/(RAND_MAX+1.0);
        if(y<sin(M_PI*x)) count++;
    }
    r=(double) count/N;
    error = r - 2/M_PI;
    printf("Result is %f(Error:%f)\n",r,error);
    return 0;
}