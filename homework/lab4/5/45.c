#include <stdio.h>

int main() {
    int Data[6] ;
    int TotalSum = 0 ;
    int I ;

    for (I = 0 ; I < 6 ; I++) {
        scanf("%d", &Data[I]) ;
    }

    printf("\n--- SUMMATION REPORT ---\n") ;
    printf("Recorded Numbers:") ;

    for (I = 0 ; I < 6 ; I++) {
        printf(" %d", Data[I]) ;
        TotalSum += Data[I] ;
    }

    printf("\n") ;
    printf("Total Sum of Numbers: %d\n", TotalSum) ;

    return 0 ;
}