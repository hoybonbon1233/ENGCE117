#include <stdio.h>
#include <stdlib.h>

void Go(int ***P, int **Z) ;

int main(void) {
    int *B = (int *)malloc(sizeof(int)) ;
    *B = 10 ;
    int *C = (int *)malloc(sizeof(int)) ;
    *C = 20 ;
    int **A ;
    
    Go(&A, &B) ;
    printf("%d %p %p %p\n", **A, A, &A) ;
    
    Go(&A, &C) ;
    printf("%d %p %p %p\n", **A, *A, A, &A) ;
    
    free(B) ;
    free(C) ;
    
    return 0 ;
}

void Go(int ***P, int **Z) {
    *P = Z ;
}
