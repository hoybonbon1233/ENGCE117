#include <stdio.h>

void Go(int **P, int *Z) {
    *P = Z ;
}

int main(void) {
    int *A, B = 10, C = 20 ;
    
    Go(&A, &B) ;
    printf("%d %p %p\n", *A, A, &A) ;
    
    Go(&A, &C) ;
    printf("%d %p %p\n", *A, A, &A) ;
    
    return 0 ;
}
