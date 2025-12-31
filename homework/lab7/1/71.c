#include <stdio.h>

#define FILENAME "output_data.txt"

int main() {
    FILE *FilePtr ;
    int Year = 2025 ;

    FilePtr = fopen(FILENAME, "w") ;

    if (FilePtr == NULL) {
        printf("ERROR: Could not open file %s for writing.\n", FILENAME) ;
        return 1 ;
    }

    printf("--- FILE WRITING PROCESS ---\n") ;
    printf("Writing data to %s...\n", FILENAME) ;

    fprintf(FilePtr, "Hello, C File Handling is easy.\n") ;
    fprintf(FilePtr, "%d", Year) ;

    fclose(FilePtr) ;

    printf("File writing complete.\n") ;

    printf("\n--- FILE OPERATION REPORT ---\n") ;
    printf("Action: File created and data written successfully.\n") ;
    printf("Filename: %s\n", FILENAME) ;

    return 0 ;
}