#include <stdio.h>

void SwapValues(int *A, int *B) ;

int main() {
    int Num1 ;
    int Num2 ;

    printf("Enter value for Num1: ") ;
    scanf("%d", &Num1) ;

    printf("Enter value for Num2: ") ;
    scanf("%d", &Num2) ;

    printf("\n--- SWAPPING REPORT ---\n") ;
    printf("Before Swap - Num1: %d, Num2: %d\n", Num1, Num2) ;

    SwapValues(&Num1, &Num2) ;

    printf("After Swap - Num1: %d, Num2: %d\n", Num1, Num2) ;

    return 0 ;
}

void SwapValues(int *A, int *B) {
    int Temp ;

    Temp = *A ;
    *A = *B ;
    *B = Temp ;
}