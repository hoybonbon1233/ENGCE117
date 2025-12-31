#include <stdio.h>

int main() {
    int Data[10] ;
    int Status[10] ;
    int N ;
    int I, J ;
    int Count ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    for (I = 0 ; I < N ; I++) {
        Status[I] = 0 ;
    }

    for (I = 0 ; I < N ; I++) {
        scanf("%d", &Data[I]) ;
    }

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n") ;
    printf("Total elements recorded (N): %d\n", N) ;
    printf("Recorded Numbers:") ;

    for (I = 0 ; I < N ; I++) {
        printf(" %d", Data[I]) ;
    }
    printf("\n") ;

    printf("--- FREQUENCY TABLE ---\n") ;
    printf("Number | Frequency\n") ;
    printf("-------|----------\n") ;

    for (I = 0 ; I < N ; I++) {
        if (Status[I] == 0) {
            Count = 1 ;

            for (J = I + 1 ; J < N ; J++) {
                if (Data[I] == Data[J]) {
                    Count++ ;
                    Status[J] = 1 ;
                }
            }

            printf("%d | %d\n", Data[I], Count) ;
        }
    }

    return 0 ;
}