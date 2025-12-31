#include <stdio.h>

struct Student {
    int StudentId ;
    int Score ;
    char Grade ;
} ;

void CalculateGrade(struct Student *StudentPtr) ;
void DisplayMenu() ;

int main() {
    struct Student StudentRecord = {0, 0, 'F'} ;
    int Choice ;

    do {
        DisplayMenu() ;
        scanf("%d", &Choice) ;

        switch (Choice) {
            case 1:
                printf("Enter Student ID: ") ;
                scanf("%d", &StudentRecord.StudentId) ;
                
                printf("Enter Score (0-100): ") ;
                scanf("%d", &StudentRecord.Score) ;
                
                CalculateGrade(&StudentRecord) ;
                
                printf("Data updated. Grade calculated.\n") ;
                break ;

            case 2:
                if (StudentRecord.StudentId == 0) {
                    printf("No student data has been entered yet (ID is 0).\n") ;
                } else {
                    printf("\n--- STUDENT REPORT ---\n") ;
                    printf("ID: %d\n", StudentRecord.StudentId) ;
                    printf("Score: %d\n", StudentRecord.Score) ;
                    printf("Grade: %c\n", StudentRecord.Grade) ;
                }
                break ;

            case 3:
                printf("Exiting program. Goodbye!\n") ;
                break ;

            default:
                printf("Invalid choice. Please try again.\n") ;
        }
    } while (Choice != 3) ;

    return 0 ;
}

void CalculateGrade(struct Student *StudentPtr) {
    if (StudentPtr->Score >= 80) {
        StudentPtr->Grade = 'A' ;
    } else if (StudentPtr->Score >= 70) {
        StudentPtr->Grade = 'B' ;
    } else if (StudentPtr->Score >= 60) {
        StudentPtr->Grade = 'C' ;
    } else if (StudentPtr->Score >= 50) {
        StudentPtr->Grade = 'D' ;
    } else {
        StudentPtr->Grade = 'F' ;
    }
}

void DisplayMenu() {
    printf("\n--- STUDENT RECORD MENU ---\n") ;
    printf("1. Input/Update Student Data\n") ;
    printf("2. View Student Report\n") ;
    printf("3. Exit Program\n") ;
    printf("Enter choice: ") ;
}