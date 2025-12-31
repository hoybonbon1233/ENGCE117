#include <stdio.h>

struct Student {
    int Id ;
    int MathScore ;
    int ScienceScore ;
    int EnglishScore ;
    int TotalScore ;
} ;

char CalculateGrade(int TotalScore) {
    if (TotalScore >= 250) {
        return 'A' ;
    } else if (TotalScore >= 200) {
        return 'B' ;
    } else {
        return 'C' ;
    }
}

void CalculateAverage(int TotalScore, float *Avg) {
    *Avg = (float)TotalScore / 3 ;
}

int main() {
    struct Student StudentInfo ;
    char FinalGrade ;
    float FinalAverage ;

    printf("Enter Student ID: ") ;
    scanf("%d", &StudentInfo.Id) ;

    printf("Enter Math Score (out of 100): ") ;
    scanf("%d", &StudentInfo.MathScore) ;

    printf("Enter Science Score (out of 100): ") ;
    scanf("%d", &StudentInfo.ScienceScore) ;

    printf("Enter English Score (out of 100): ") ;
    scanf("%d", &StudentInfo.EnglishScore) ;

    StudentInfo.TotalScore = StudentInfo.MathScore + StudentInfo.ScienceScore + StudentInfo.EnglishScore ;

    FinalGrade = CalculateGrade(StudentInfo.TotalScore) ;
    CalculateAverage(StudentInfo.TotalScore, &FinalAverage) ;

    printf("\n--- STUDENT ACADEMIC REPORT ---\n") ;
    printf("Student ID: %d\n", StudentInfo.Id) ;
    printf("Math Score: %d, Science Score: %d, English Score: %d\n", StudentInfo.MathScore, StudentInfo.ScienceScore, StudentInfo.EnglishScore) ;
    printf("Total Score: %d\n", StudentInfo.TotalScore) ;
    printf("Average Score: %.2f\n", FinalAverage) ;
    printf("Final Grade: %c\n", FinalGrade) ;

    return 0 ;
}