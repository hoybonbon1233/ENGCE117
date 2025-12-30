#include <stdio.h>

struct Student {
    char Name[50] ;
    int StudentId ;
    float Score ;
} ;

int main() {
    int N, I ;
    float TotalScore = 0.0, AverageScore ;

    scanf("%d", &N) ;

    struct Student Students[N] ;

    for (I = 0 ; I < N ; I++) {
        scanf("%d %f %s", &Students[I].StudentId, &Students[I].Score, Students[I].Name) ;
        TotalScore += Students[I].Score ;
    }

    AverageScore = TotalScore / N ;

    printf("Average Score: %.2f\n", AverageScore) ;

    return 0 ;
}