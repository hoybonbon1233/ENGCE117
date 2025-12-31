#include <stdio.h>

#define NUM_STUDENTS 4

struct Student {
    int Id ;
} ;

int CheckIdExistence(struct Student Students[], int Size, int SearchId) {
    int I ;

    for (I = 0 ; I < Size ; I++) {
        if (Students[I].Id == SearchId) {
            return 1 ;
        }
    }

    return 0 ;
}

int main() {
    struct Student IdList[NUM_STUDENTS] ;
    int SearchId ;
    int FoundStatus ;
    int I ;

    printf("Enter IDs for %d students:\n", NUM_STUDENTS) ;

    for (I = 0 ; I < NUM_STUDENTS ; I++) {
        printf("Student %d ID: ", I + 1) ;
        scanf("%d", &IdList[I].Id) ;
    }

    printf("\nEnter ID to search: ") ;
    scanf("%d", &SearchId) ;

    FoundStatus = CheckIdExistence(IdList, NUM_STUDENTS, SearchId) ;

    printf("\n--- ID SEARCH REPORT ---\n") ;
    printf("Recorded IDs:") ;

    for (I = 0 ; I < NUM_STUDENTS ; I++) {
        printf(" %d", IdList[I].Id) ;
    }

    printf("\n") ;
    printf("Search ID: %d\n", SearchId) ;

    if (FoundStatus == 1) {
        printf("ID FOUND in the system.\n") ;
    } else {
        printf("ID NOT FOUND in the system.\n") ;
    }

    return 0 ;
}