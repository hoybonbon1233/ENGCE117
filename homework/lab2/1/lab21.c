#include <stdio.h>

int main() {
    int N ;
    int I ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    for (I = 0 ; I < N ; I++) {
        printf("Hello Loop!\n") ;
    }

    return 0 ;
}