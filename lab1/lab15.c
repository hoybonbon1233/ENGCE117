#include <stdio.h>

int matrix[1000] ;


void GetMatrix(int **value, int *row, int *col) {
    
    int i, j ;

    
    printf("How many row, col ? \n") ;
    scanf("%d %d", row, col) ;

    *value = matrix ;

   
    for (i = 0 ; i < *row ; i++) {
        for (j = 0; j < *col; j++) {
            
            printf("a[%d][%d] = ", i, j)  ;
             
          
            scanf("%d", &matrix[i * (*col) + j]) ;
        }
    }
}

int main() {
    int *data , m , n ;
    int i , j ; 

    GetMatrix(&data, &m, &n) ;

    
    printf("\nMatrix:\n") ;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}