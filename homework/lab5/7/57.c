#include <stdio.h>

#define SIZE 5

void SortArrayAscending(int Array[], int Size) ;
void PrintArray(int Array[], int Size) ;

int main() {
    int Numbers[SIZE] ;
    int OriginalCopy[SIZE] ;
    int I ;

    printf("Enter %d integer numbers for sorting:\n", SIZE) ;
    for (I = 0 ; I < SIZE ; I++) {
        printf("Element %d: ", I + 1) ;
        scanf("%d", &Numbers[I]) ;
        OriginalCopy[I] = Numbers[I] ;
    }

    printf("\n--- ARRAY SORTING REPORT ---\n") ;

    printf("Original Array: ") ;
    PrintArray(OriginalCopy, SIZE) ;

    SortArrayAscending(Numbers, SIZE) ;

    printf("Sorted Array (Ascending): ") ;
    PrintArray(Numbers, SIZE) ;

    return 0 ;
}

void SortArrayAscending(int Array[], int Size) {
    int I, J, Temp ;

    for (I = 0 ; I < Size - 1 ; I++) {
        for (J = 0 ; J < Size - I - 1 ; J++) {
            if (Array[J] > Array[J + 1]) {
                Temp = Array[J] ;
                Array[J] = Array[J + 1] ;
                Array[J + 1] = Temp ;
            }
        }
    }
}

void PrintArray(int Array[], int Size) {
    int I ;
    for (I = 0 ; I < Size ; I++) {
        printf("%d ", Array[I]) ;
    }
    printf("\n") ;
}