#include <stdio.h>

int main() {
    int N, I ;
    int PassSum = 0 ;
    int FailCount = 0 ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    int Scores[N] ;

    for (I = 0 ; I < N ; I++) {
        scanf("%d", &Scores[I]) ;

        if (Scores[I] >= 50) {
            PassSum += Scores[I] ;
        } else {
            FailCount++ ;
        }
    }

    printf("Passing Scores Sum: %d\n", PassSum) ;
    printf("Failing Students Count: %d\n", FailCount) ;

    return 0 ;
}