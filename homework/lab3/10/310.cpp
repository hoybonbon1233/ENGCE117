#include <stdio.h>

struct Item {
    char Name[50] ;
    float UnitPrice ;
    int Quantity ;
} ;

int main() {
    int N, I ;
    float SubTotal = 0.0 ;
    float TotalVAT = 0.0 ;
    float GrandTotal = 0.0 ;
    float VatRate = 0.07 ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    struct Item Items[N] ;

    printf("--- RECEIPT ---\n") ;

    for (I = 0 ; I < N ; I++) {
        float ItemCost ;

        scanf("%s %f %d", Items[I].Name, &Items[I].UnitPrice, &Items[I].Quantity) ;

        ItemCost = Items[I].UnitPrice * Items[I].Quantity ;

        printf("%s x %d = %.2f\n", Items[I].Name, Items[I].Quantity, ItemCost) ;

        SubTotal += ItemCost ;
    }

    TotalVAT = SubTotal * VatRate ;
    GrandTotal = SubTotal + TotalVAT ;

    printf("------------------\n") ;
    printf("Subtotal: %.2f\n", SubTotal) ;
    printf("VAT (7%%): %.2f\n", TotalVAT) ;
    printf("Grand Total: %.2f\n", GrandTotal) ;

    return 0 ;
}