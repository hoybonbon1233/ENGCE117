#include <stdio.h>

int main() {
    int N, I ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    int Scores[N] ;

    for (I = 0 ; I < N ; I++) {
        scanf("%d", &Scores[I]) ;
    }

    for (I = N - 1 ; I >= 0 ; I--) {
        printf("%d\n", Scores[I]) ;
    }

    return 0 ;
}