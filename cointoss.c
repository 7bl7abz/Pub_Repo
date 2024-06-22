#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void){
    int numTosses = 20000;
    int heads = 0;
    int tails = 0;
    int i;
    int toss;
    srand((unsigned) time(NULL));
    for (i = 0; i<numTosses; i++) {
        toss = rand() % 2;
        if(toss == 0) {
            heads++;
        } else {
            tails++;
        }
    }
    printf("Total Heads: %5d\n",heads);
    printf("Total Tails: %5d\n",tails); //test1
    return 0;
}