#include <stdio.h>

struct Order {
    int ItemId ;
    float UnitPrice ;
    int Quantity ;
} ;

int main() {
    int N, I ;
    float GrandTotal = 0.0, ItemTotal ;
    float ShippingFree = 50.0 ;

    scanf("%d", &N) ;

    struct Order Orders[N] ;

    for (I = 0 ; I < N ; I++) {
        scanf("%d %f %d", &Orders[I].ItemId, &Orders[I].UnitPrice, &Orders[I].Quantity) ;

        ItemTotal = (Orders[I].UnitPrice * Orders[I].Quantity) + ShippingFree ;

        if (ItemTotal >= 500.0) {
            ItemTotal *= 0.90 ;
        }

        GrandTotal += ItemTotal ;
    }

    printf("Grand Total: %.2f\n", GrandTotal) ;

    return 0 ;
}