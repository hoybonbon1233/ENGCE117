#include <stdio.h>

struct Student {
    char Name[50] ;
    int StudentId ;
    float Score ;
} ;

int main() {
    int N, I ;
    int PassCount = 0 ;
    int FailCount = 0 ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    struct Student Students[N] ;

    for (I = 0 ; I < N ; I++) {
        scanf("%d %f %s", &Students[I].StudentId, &Students[I].Score, Students[I].Name) ;
    }

    for (I = 0 ; I < N ; I++) {
        if (Students[I].Score >= 60.0) {
            PassCount++ ;
        } else {
            FailCount++ ;
        }
    }

    printf("Pass Count: %d\n", PassCount) ;
    printf("Fail Count: %d\n", FailCount) ;

    return 0 ;
}