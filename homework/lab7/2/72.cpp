#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *FilePtr ;
    int Num1, Num2, Num3, Num4, Num5 ;
    int TotalSum = 0 ;

    FilePtr = fopen("input_data.csv", "r") ;

    if (FilePtr == NULL) {
        printf("ERROR: Could not open file input_data.csv for reading. Make sure the file exists.\n") ;
        exit(1) ;
    }

    printf("--- FILE READING PROCESS ---\n") ;
    printf("Reading data from input_data.csv...\n") ;

    fscanf(FilePtr, "%d,%d,%d,%d,%d", &Num1, &Num2, &Num3, &Num4, &Num5) ;

    fclose(FilePtr) ;

    printf("File reading complete.\n") ;

    TotalSum = Num1 + Num2 + Num3 + Num4 + Num5 ;

    printf("\n--- DATA ANALYSIS REPORT ---\n") ;
    printf("Data read: %d, %d, %d, %d, %d\n", Num1, Num2, Num3, Num4, Num5) ;
    printf("Total Sum: %d\n", TotalSum) ;

    return 0 ;
}