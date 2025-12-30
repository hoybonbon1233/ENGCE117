#include <stdio.h>

struct Campaign {
    char Name[50] ;
    float ProductPrice ;
    int SalesCount ;
    float AdSpend ;
} ;

int main() {
    int N, I ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    struct Campaign Campaigns[N] ;

    for (I = 0 ; I < N ; I++) {
        float CommissionRate = 0.0 ;
        float TotalRevenue ;
        float TotalCommission ;
        float NetProfitLoss ;

        scanf("%s %f %d %f", Campaigns[I].Name, &Campaigns[I].ProductPrice, &Campaigns[I].SalesCount, &Campaigns[I].AdSpend) ;

        TotalRevenue = Campaigns[I].SalesCount * Campaigns[I].ProductPrice ;

        if (Campaigns[I].SalesCount >= 20) {
            CommissionRate = 0.20 ;
        } else if (Campaigns[I].SalesCount >= 10) {
            CommissionRate = 0.15 ;
        } else {
            CommissionRate = 0.10 ;
        }

        TotalCommission = TotalRevenue * CommissionRate ;
        NetProfitLoss = TotalCommission - Campaigns[I].AdSpend ;

        printf("--- Campaign: %s ---\n", Campaigns[I].Name) ;
        printf("Sales: %d, Ad Spend: %.2f\n", Campaigns[I].SalesCount, Campaigns[I].AdSpend) ;
        printf("Rate Used: %.0f%%\n", CommissionRate * 100) ;
        printf("Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n", TotalRevenue, CommissionRate * 100, Campaigns[I].AdSpend, NetProfitLoss) ;
        printf("Net Result: %.2f\n", NetProfitLoss) ;
    }

    return 0 ;
}