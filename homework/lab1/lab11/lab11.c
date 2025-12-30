#include <stdio.h>

int main() {
    int CategoryCode ;
    float PriceBeforeVat ;
    float TotalBill = 0.0 ;
    float VatAmount = 0.0 ; 

    if (scanf("%f %d", &PriceBeforeVat, &CategoryCode) != 2) {
        return 1 ;
    }

    if (CategoryCode >= 1 && CategoryCode <= 3) {
        if (CategoryCode == 1) {
            TotalBill = PriceBeforeVat * 1.07 ;
        } else if (CategoryCode == 2) {
            TotalBill = PriceBeforeVat ;
        } else {
            TotalBill = PriceBeforeVat * 1.15 ;
        }

        VatAmount = TotalBill - PriceBeforeVat ;

        printf("VAT Amount: %.2f\n", VatAmount) ;
        printf("Total Price: %.2f\n", TotalBill) ;
    } else {
        printf("Invalid Category\n") ;
    }

    return 0 ;
}