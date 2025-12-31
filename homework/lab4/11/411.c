#include <stdio.h>

int main() {
    int Matrix[2][4] ;
    int TotalSum = 0 ;
    int I, J ;

    for (I = 0 ; I < 2 ; I++) {
        for (J = 0 ; J < 4 ; J++) {
            scanf("%d", &Matrix[I][J]) ;
        }
    }

    printf("\n--- 2D ARRAY SUMMATION REPORT ---\n") ;
    printf("Recorded Matrix (2x4):\n") ;

    for (I = 0 ; I < 2 ; I++) {
        for (J = 0 ; J < 4 ; J++) {
            printf("%d ", Matrix[I][J]) ;
            TotalSum += Matrix[I][J] ;
        }
        printf("\n") ;
    }

    printf("\nTotal Sum of all elements: %d\n", TotalSum) ;

    return 0 ;
}