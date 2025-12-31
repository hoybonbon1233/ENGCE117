#include <stdio.h>

void IncreaseValue(int *NumberPtr) {
    *NumberPtr = *NumberPtr + 10 ;
}

int main() {
    int Data ;

    scanf("%d", &Data) ;

    printf("\n--- POINTER MODIFICATION REPORT ---\n") ;
    printf("1. Value BEFORE function call: %d\n", Data) ;

    IncreaseValue(&Data) ;

    printf("2. Value AFTER function call: %d\n", Data) ;

    return 0 ;
}