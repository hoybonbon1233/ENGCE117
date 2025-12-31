#include <stdio.h>

void CalculateSumProduct(int Num1, int Num2, int *SumPtr, int *ProdPtr) ;

int main() {
    int ValA, ValB ;
    int ResultSum ;
    int ResultProduct ;

    printf("Enter first integer (Val A): ") ;
    scanf("%d", &ValA) ;

    printf("Enter second integer (Val B): ") ;
    scanf("%d", &ValB) ;

    CalculateSumProduct(ValA, ValB, &ResultSum, &ResultProduct) ;

    printf("\n--- CALCULATION REPORT ---\n") ;
    printf("Input Values: A = %d, B = %d\n", ValA, ValB) ;
    printf("------------------------------\n") ;
    printf("Result Sum (A + B): %d\n", ResultSum) ;
    printf("Result Product (A * B): %d\n", ResultProduct) ;

    return 0 ;
}

void CalculateSumProduct(int Num1, int Num2, int *SumPtr, int *ProdPtr) {
    *SumPtr = Num1 + Num2 ;
    *ProdPtr = Num1 * Num2 ;
}