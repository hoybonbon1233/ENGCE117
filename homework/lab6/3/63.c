#include <stdio.h>

#define SIZE 3

int main() {
    int Data[SIZE] ;
    int *Ptr ;
    int I ;

    printf("Enter %d integer elements for the array:\n", SIZE) ;

    for (I = 0 ; I < SIZE ; I++) {
        printf("Element %d: ", I) ;
        scanf("%d", &Data[I]) ;
    }

    Ptr = Data ;

    printf("\n--- ARRAY AND POINTER REPORT ---\n") ;
    printf("Index | Value (Direct) | Value (via Pointer) | Address\n") ;
    printf("----------------------------------------------------------\n") ;

    for (I = 0 ; I < SIZE ; I++) {
        printf("%-5d | %-14d | %-19d | %p\n", 
               I, 
               Data[I], 
               *(Ptr + I), 
               (void *)(Ptr + I)) ;
    }

    return 0 ;
}