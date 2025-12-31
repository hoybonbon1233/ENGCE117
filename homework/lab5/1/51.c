#include <stdio.h>

int CalculateArea(int Length, int Width) {
    return Length * Width ;
}

int main() {
    int InputLength ;
    int InputWidth ;
    int ResultArea ;

    printf("Enter rectangle length (integer): ") ;
    scanf("%d", &InputLength) ;

    printf("Enter rectangle width (integer): ") ;
    scanf("%d", &InputWidth) ;

    ResultArea = CalculateArea(InputLength, InputWidth) ;

    printf("\n--- RECTANGLE AREA REPORT ---\n") ;
    printf("Length: %d\n", InputLength) ;
    printf("Width: %d\n", InputWidth) ;
    printf("Calculated Area: %d\n", ResultArea) ;

    return 0 ;
}