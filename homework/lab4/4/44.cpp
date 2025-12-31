#include <stdio.h>

int main() {
    int Numbers[5] ;
    int EvenCount = 0 ;
    int OddCount = 0 ;
    int I ;

    for (I = 0 ; I < 5 ; I++) {
        scanf("%d", &Numbers[I]) ;
    }

    printf("\n--- NUMBER CLASSIFICATION REPORT ---\n") ;
    printf("Recorded Numbers:") ;

    for (I = 0 ; I < 5 ; I++) {
        printf(" %d", Numbers[I]) ;

        if (Numbers[I] % 2 == 0) {
            EvenCount++ ;
        } else {
            OddCount++ ;
        }
    }

    printf("\n") ;
    printf("Total Even Numbers Found: %d\n", EvenCount) ;
    printf("Total Odd Numbers Found: %d\n", OddCount) ;

    return 0 ;
}