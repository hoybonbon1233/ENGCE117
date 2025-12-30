#include <stdio.h>

int main() {
    char Text[101] ;
    int CountUpper = 0 ;
    int CountLower = 0 ;
    int CountDigit = 0 ;
    int CountOther = 0 ;
    int I ;

    if (scanf("%s", Text) != 1) {
        return 1 ;
    }

    for (I = 0 ; Text[I] != '\0' ; I++) {
        if (Text[I] >= 'A' && Text[I] <= 'Z') {
            CountUpper++ ;
        } else if (Text[I] >= 'a' && Text[I] <= 'z') {
            CountLower++ ;
        } else if (Text[I] >= '0' && Text[I] <= '9') {
            CountDigit++ ;
        } else {
            CountOther++ ;
        }
    }

    printf("Uppercase: %d\n", CountUpper) ;
    printf("Lowercase: %d\n", CountLower) ;
    printf("Digits: %d\n", CountDigit) ;
    printf("Special/Other: %d\n", CountOther) ;

    return 0 ;
}