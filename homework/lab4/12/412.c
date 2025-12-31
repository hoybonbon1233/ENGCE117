#include <stdio.h>

void PrintMatrix(int Rows, int Cols, int Matrix[Rows][Cols]) {
    int I, J ;
    for (I = 0 ; I < Rows ; I++) {
        for (J = 0 ; J < Cols ; J++) {
            printf("%d ", Matrix[I][J]) ;
        }
        printf("\n") ;
    }
}

int main() {
    int MatrixA[2][3] ;
    int MatrixB[2][3] ;
    int MatrixBT[3][2] ;
    int MatrixC[2][2] ;
    int I, J, K ;

    printf("Enter elements for Matrix A (2x3):\n") ;
    for (I = 0 ; I < 2 ; I++) {
        for (J = 0 ; J < 3 ; J++) {
            scanf("%d", &MatrixA[I][J]) ;
        }
    }

    printf("\nEnter elements for Matrix B (2x3):\n") ;
    for (I = 0 ; I < 2 ; I++) {
        for (J = 0 ; J < 3 ; J++) {
            scanf("%d", &MatrixB[I][J]) ;
        }
    }

    for (I = 0 ; I < 2 ; I++) {
        for (J = 0 ; J < 3 ; J++) {
            MatrixBT[J][I] = MatrixB[I][J] ;
        }
    }

    for (I = 0 ; I < 2 ; I++) {
        for (J = 0 ; J < 2 ; J++) {
            MatrixC[I][J] = 0 ;
            for (K = 0 ; K < 3 ; K++) {
                MatrixC[I][J] += MatrixA[I][K] * MatrixBT[K][J] ;
            }
        }
    }

    printf("\n--- MATRIX MULTIPLICATION REPORT ---\n") ;
    
    printf("\nMatrix A (2x3):\n") ;
    PrintMatrix(2, 3, MatrixA) ;

    printf("\nMatrix B (2x3):\n") ;
    PrintMatrix(2, 3, MatrixB) ;

    printf("\nMatrix B Transposed (BT, 3x2):\n") ;
    PrintMatrix(3, 2, MatrixBT) ;

    printf("\nResult Matrix C (A x BT, 2x2):\n") ;
    PrintMatrix(2, 2, MatrixC) ;

    return 0 ;
}