#include <stdio.h>


void GetSet(int a[], int *b) {
    
    int i ; 

    printf("Enter number of elements: \n") ;
    scanf("%d", b) ;

   
    printf("Enter %d numbers: \n", *b) ;
    for (i = 0 ; i < *b ; i++) {
        scanf("%d", &a[i]) ;
    }
}

int main() {
    
    int data[100] ;
    int num ;
    int i ;

    
    GetSet(data, &num) ;

    
    for (i = 0 ; i < num ; i++) {
        printf("%d ", data[i]) ;
    }
    
    printf("\n") ;
    return 0 ;
}