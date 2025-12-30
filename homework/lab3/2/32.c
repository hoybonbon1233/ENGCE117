#include <stdio.h>

struct Student {
    char Name[50] ;
    int StudentId ;
    float Score ;
} ;

int main() {
    int N, I ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    struct Student Students[N] ;

    for (I = 0 ; I < N ; I++) {
        scanf("%d %f %s", &Students[I].StudentId, &Students[I].Score, Students[I].Name) ;
    }

    for (I = 0 ; I < N ; I++) {
        printf("ID: %d, Name: %s, Score: %.2f\n", Students[I].StudentId, Students[I].Name, Students[I].Score) ;
    }

    return 0 ;
}