#include <stdio.h>

int main(void){
    int i, n, f1 = 0, f2 = 1, f3;
    printf("Input positive integer n: ");
    scanf("%d", &n);

    if (n==0){
        printf("0 \n");
    } else if (n==1){
        printf("0 1 \n");
    }else{
        printf("0 1 ");
        i = 2;
        while (i<=n){
            f3 = f1 + f2;
            printf("%d ",f3);
            f1 = f2;
            f2 = f3;
            i = i + 1;
        }
        printf("\n");
    }
    
    return 0;
}