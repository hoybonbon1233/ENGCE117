#include <stdio.h>

int main() {
    int Data[10] ;
    int N ;
    int SearchValue ;
    int Count = 0 ;
    int I ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    for (I = 0 ; I < N ; I++) {
        scanf("%d", &Data[I]) ;
    }

    scanf("%d", &SearchValue) ;

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n") ;
    printf("Total elements recorded (N): %d\n", N) ;
    printf("Recorded Numbers:") ;

    for (I = 0 ; I < N ; I++) {
        printf(" %d", Data[I]) ;

        if (Data[I] == SearchValue) {
            Count++ ;
        }
    }

    printf("\n") ;
    printf("Search Value: %d\n", SearchValue) ;
    printf("Frequency Count: %d\n", Count) ;

    return 0 ;
}