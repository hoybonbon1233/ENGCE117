#include <stdio.h>

int main() {
    int Data[3][3] ;
    int I, J ;

    for (I = 0 ; I < 3 ; I++) {
        for (J = 0 ; J < 3 ; J++) {
            scanf("%d", &Data[I][J]) ;
        }
    }

    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n") ;
    printf("Array Size: 3 Rows x 3 Columns\n") ;
    printf("Content (Table Format):\n") ;

    for (I = 0 ; I < 3 ; I++) {
        for (J = 0 ; J < 3 ; J++) {
            printf("%d ", Data[I][J]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}