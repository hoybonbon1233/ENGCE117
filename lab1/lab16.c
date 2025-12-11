#include <stdio.h>

int main() {
    int number;
    int input_status; 

    do {
        
        printf("Enter a number (1-10): ");

        
        input_status = scanf("%d", &number);

        
        if (input_status != 1) {
            
            
            printf("Error: Value must be 1-10.\n");
            
            
            while (getchar() != '\n'); 
            
           
            number = 0; 
            
            continue; 
        }

        
        if (number >= 1 && number <= 10) {
           
            printf("Input accepted: %d\n", number);
            break; 
        } else {
            
            printf("Error: Value must be 1-10.\n");
        }

    } while (1) ;

    return 0;
}