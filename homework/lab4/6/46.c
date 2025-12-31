#include <stdio.h>

int main() {
    int Scores[5] ;
    int Sum = 0 ;
    float Average = 0.0 ;
    int AboveAverageCount = 0 ;
    int I ;

    for (I = 0 ; I < 5 ; I++) {
        scanf("%d", &Scores[I]) ;
        Sum += Scores[I] ;
    }

    Average = (float)Sum / 5 ;

    for (I = 0 ; I < 5 ; I++) {
        if (Scores[I] > Average) {
            AboveAverageCount++ ;
        }
    }

    printf("\n--- STUDENT SCORE ANALYSIS REPORT ---\n") ;
    printf("Recorded Scores:") ;

    for (I = 0 ; I < 5 ; I++) {
        printf(" %d", Scores[I]) ;
    }

    printf("\n") ;
    printf("Total Sum: %d\n", Sum) ;
    printf("Average Score: %.2f\n", Average) ;
    printf("Number of Scores Above Average: %d\n", AboveAverageCount) ;

    return 0 ;
}