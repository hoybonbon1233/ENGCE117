#include <stdio.h>

#define SIZE 5

int FindAndUpdate(int *ArrPtr, int Size, int SearchValue, int NewValue) ;
void PrintArray(int Array[], int Size) ;

int main() {
    int Numbers[SIZE] ;
    int SearchVal ;
    int NewVal ;
    int Status ;
    int I ;

    printf("Enter %d integer elements for the array:\n", SIZE) ;
    for (I = 0 ; I < SIZE ; I++) {
        printf("Element %d: ", I + 1) ;
        scanf("%d", &Numbers[I]) ;
    }

    printf("\nEnter value to search (Search Value): ") ;
    scanf("%d", &SearchVal) ;
    printf("Enter new value to replace it with (New Value): ") ;
    scanf("%d", &NewVal) ;

    printf("\n--- ARRAY UPDATE REPORT ---\n") ;
    printf("Array BEFORE Update: ") ;
    PrintArray(Numbers, SIZE) ;

    Status = FindAndUpdate(Numbers, SIZE, SearchVal, NewVal) ;

    printf("Array AFTER Update: ") ;
    PrintArray(Numbers, SIZE) ;

    printf("Status: ") ;
    if (Status == 1) {
        printf("Update SUCCESSFUL.\n") ;
    } else {
        printf("Update FAILED (Value not found).\n") ;
    }

    return 0 ;
}

int FindAndUpdate(int *ArrPtr, int Size, int SearchValue, int NewValue) {
    int I ;

    for (I = 0 ; I < Size ; I++) {
        if (*(ArrPtr + I) == SearchValue) {
            *(ArrPtr + I) = NewValue ;
            return 1 ;
        }
    }

    return 0 ;
}

void PrintArray(int Array[], int Size) {
    int I ;
    for (I = 0 ; I < Size ; I++) {
        printf("%d ", Array[I]) ;
    }
    printf("\n") ;
}