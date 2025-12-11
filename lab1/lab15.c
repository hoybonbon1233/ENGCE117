#include <stdio.h>

int main() {
    int kingh_userInput;

    do {
        printf("Enter a number (1-10): ");
        if (scanf("%d", &kingh_userInput) != 1) {
            break;
        }

        if (kingh_userInput < 1 || kingh_userInput > 10) {
            printf("Error: Value must be 1-10.\n");
        }
    } while (kingh_userInput < 1 || kingh_userInput > 10);

    printf("Input accepted: %d\n", kingh_userInput);
    return 0;
}