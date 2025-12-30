#include <stdio.h>

struct SalesRecord {
    char Name[50] ;
    float Target ;
    float Actual ;
} ;

int main() {
    int N, I ;
    float GrandTotalCommission = 0.0 ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    struct SalesRecord Records[N] ;

    for (I = 0 ; I < N ; I++) {
        float BaseCommission ;

        scanf("%f %f %s", &Records[I].Target, &Records[I].Actual, Records[I].Name) ;

        BaseCommission = Records[I].Actual * 0.10 ;

        if (Records[I].Actual >= Records[I].Target * 1.20) {
            BaseCommission += 200.0 ;
        } else if (Records[I].Actual >= Records[I].Target) {
            BaseCommission += 50.0 ;
        } else if (Records[I].Actual < Records[I].Target * 0.90) {
            BaseCommission -= 100.0 ;
        }

        GrandTotalCommission += BaseCommission ;
    }

    printf("Grand Total Commission: %.2f\n", GrandTotalCommission) ;

    return 0 ;
}