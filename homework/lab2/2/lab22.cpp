#include <stdio.h>

int main() {
    int N ;
    int I ;
    int Quantity ;
    float UnitPrice ;
    float ItemCost ;
    float GrandTotal = 0.0 ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    for (I = 0 ; I < N ; I++) {
        if (scanf("%f %d", &UnitPrice, &Quantity) != 2) {
            break ;
        }

        ItemCost = UnitPrice * Quantity ;

        if (UnitPrice >= 1000.00) {
            ItemCost = ItemCost * 0.90 ;
        }

        GrandTotal += ItemCost ;
    }

    printf("Grand Total: %.2f\n", GrandTotal) ;

    return 0 ;
}