#include <stdio.h>

int main() {
    int Choice ;
    float TotalCost = 0.0 ;
    float PaidAmount ;
    float Change ;

    do {
        printf("\n--- Vending Machine ---\n") ;
        printf("1. Coke (15.00)\n") ;
        printf("2. Water (10.00)\n") ;
        printf("3. Snack (25.00)\n") ;
        printf("4. Exit and Pay\n") ;
        printf("Current Total: %.2f\n", TotalCost) ;
        printf("Select item (1-4): ") ;

        if (scanf("%d", &Choice) != 1) {
            break ;
        }

        switch (Choice) {
            case 1:
                TotalCost += 15.00 ;
                printf("Item added. Current Total: %.2f\n", TotalCost) ;
                break ;
            case 2:
                TotalCost += 10.00 ;
                printf("Item added. Current Total: %.2f\n", TotalCost) ;
                break ;
            case 3:
                TotalCost += 25.00 ;
                printf("Item added. Current Total: %.2f\n", TotalCost) ;
                break ;
            case 4:
                break ;
        }

    } while (Choice != 4) ;

    printf("Total due: %.2f\n", TotalCost) ;
    printf("Enter paid amount: ") ;
    
    scanf("%f", &PaidAmount) ;

    if (PaidAmount >= TotalCost) {
        Change = PaidAmount - TotalCost ;
        printf("Purchase successful. Change: %.2f\n", Change) ;
    } else {
        printf("Insufficient payment. Purchase cancelled.\n") ;
    }

    return 0 ;
}