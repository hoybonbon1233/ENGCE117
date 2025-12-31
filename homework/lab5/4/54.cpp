#include <stdio.h>

#define NUM_STUDENTS 3

struct Student {
    int Id ;
    int Score ;
} ;

int FindMaxScoreId(struct Student Students[], int Size) {
    int MaxScore = Students[0].Score ;
    int MaxId = Students[0].Id ;
    int I ;

    for (I = 1 ; I < Size ; I++) {
        if (Students[I].Score > MaxScore) {
            MaxScore = Students[I].Score ;
            MaxId = Students[I].Id ;
        }
    }

    return MaxId ;
}

int main() {
    struct Student ClassData[NUM_STUDENTS] ;
    int TopStudentId ;
    int I ;

    printf("Enter data for %d students:\n", NUM_STUDENTS) ;

    for (I = 0 ; I < NUM_STUDENTS ; I++) {
        printf("--- Student %d ---\n", I + 1) ;
        printf("Enter ID: ") ;
        scanf("%d", &ClassData[I].Id) ;
        printf("Enter Score: ") ;
        scanf("%d", &ClassData[I].Score) ;
    }

    TopStudentId = FindMaxScoreId(ClassData, NUM_STUDENTS) ;

    printf("\n--- STUDENT SCORE REPORT ---\n") ;
    printf("ID     | Score\n") ;
    printf("-------|-------\n") ;

    for (I = 0 ; I < NUM_STUDENTS ; I++) {
        printf("%-6d | %d\n", ClassData[I].Id, ClassData[I].Score) ;
    }

    printf("\nTOP PERFORMER ID: %d\n", TopStudentId) ;

    return 0 ;
}