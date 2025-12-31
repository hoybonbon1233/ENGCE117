#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char Sentence[MAX_SIZE] ;
    int VowelCount = 0 ;
    char *CharPtr ;

    printf("Enter a sentence: ") ;

    if (fgets(Sentence, MAX_SIZE, stdin) == NULL) {
        return 1 ;
    }

    
    Sentence[strcspn(Sentence, "\n")] = '\0' ;

    CharPtr = Sentence ;

    while (*CharPtr != '\0') {
        switch (*CharPtr) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                VowelCount++ ;
                break ;
        }
        CharPtr++ ;
    }

    printf("\n--- STRING ANALYSIS REPORT ---\n") ;
    printf("Input String: \"%s\"\n", Sentence) ;
    printf("Total Vowel Count: %d\n", VowelCount) ;

    return 0 ;
}