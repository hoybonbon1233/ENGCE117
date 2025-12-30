#include <stdio.h>

struct Product {
    char Name[50] ;
    int ProductId ;
    float Price ;
} ;

int main() {
    struct Product Item ;

    if (scanf("%d %f %s", &Item.ProductId, &Item.Price, Item.Name) != 3) {
        return 1 ;
    }

    printf("ID: %d, Price: %.2f, Name: %s\n", Item.ProductId, Item.Price, Item.Name) ;

    return 0 ;
}