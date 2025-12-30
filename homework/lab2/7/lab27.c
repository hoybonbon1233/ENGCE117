#include <stdio.h>

int main() {
    int N ;
    int I ;
    int CountFizzBuzz = 0 ;
    int CountFizz = 0 ;
    int CountBuzz = 0 ;
    int CountOther = 0 ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    for (I = 1 ; I <= N ; I++) {
        if (I % 3 == 0 && I % 5 == 0) {
            CountFizzBuzz++ ;
        } else if (I % 3 == 0) {
            CountFizz++ ;
        } else if (I % 5 == 0) {
            CountBuzz++ ;
        } else {
            CountOther++ ;
        }
    }

    printf("Count FizzBuzz (by 15): %d\n", CountFizzBuzz) ;
    printf("Count Fizz (by 3 only): %d\n", CountFizz) ;
    printf("Count Buzz (by 5 only): %d\n", CountBuzz) ;
    printf("Count Other: %d\n", CountOther) ;

    return 0 ;
}