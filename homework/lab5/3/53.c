#include <stdio.h>

#define SIZE 5

int CalculateSum(int Array[], int Size) {
    int Sum = 0 ;
    int I ;

    for (I = 0 ; I < Size ; I++) {
        Sum += Array[I] ;
    }

    return Sum ;
}

int main() {
    int Numbers[SIZE] ;
    int TotalSum ;
    float Average ;
    int I ;

    printf("Enter %d integer numbers:\n", SIZE) ;
    
    for (I = 0 ; I < SIZE ; I++) {
        printf("Number %d: ", I + 1) ;
        scanf("%d", &Numbers[I]) ;
    }

    TotalSum = CalculateSum(Numbers, SIZE) ;
    Average = (float)TotalSum / SIZE ;

    printf("\n--- ARRAY AVERAGE REPORT ---\n") ;
    printf("Recorded Numbers:") ;
    
    for (I = 0 ; I < SIZE ; I++) {
        printf(" %d", Numbers[I]) ;
    }

    printf("\n") ;
    printf("Total Sum: %d\n", TotalSum) ;
    printf("Average: %.2f\n", Average) ;

    return 0 ;
}