#include <stdio.h>

int main() {
    int Score ;
    int CountA = 0 ;
    int CountB = 0 ;
    int CountC = 0 ;
    int CountD = 0 ;
    int CountF = 0 ;

    if (scanf("%d", &Score) != 1) {
        return 1 ;
    }

    while (Score != -1) {
        if (Score >= 80) {
            CountA++ ;
        } else if (Score >= 70) {
            CountB++ ;
        } else if (Score >= 60) {
            CountC++ ;
        } else if (Score >= 50) {
            CountD++ ;
        } else {
            CountF++ ;
        }

        if (scanf("%d", &Score) != 1) {
            break ;
        }
    }

    printf("Grade A Count: %d\n", CountA) ;
    printf("Grade B Count: %d\n", CountB) ;
    printf("Grade C Count: %d\n", CountC) ;
    printf("Grade D Count: %d\n", CountD) ;
    printf("Grade F Count: %d\n", CountF) ;

    return 0 ;
}