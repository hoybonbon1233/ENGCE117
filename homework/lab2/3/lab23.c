#include <stdio.h>

int main() {
    int TermCode ;
    float InvestmentAmount ;
    float AprRate = 0.0 ;
    float TotalInterest = 0.0 ;

    if (scanf("%d %f", &TermCode, &InvestmentAmount) != 2) {
        return 1 ;
    }

    switch (TermCode) {
        case 1:
            if (InvestmentAmount < 5000) {
                AprRate = 0.03 ;
            } else {
                AprRate = 0.04 ;
            }
            break ;
        case 2:
            if (InvestmentAmount < 10000) {
                AprRate = 0.05 ;
            } else {
                AprRate = 0.065 ;
            }
            break ;
        case 3:
            AprRate = 0.08 ;
            break ;
        default:
            printf("Invalid Term Code\n") ;
            return 0 ;
    }

    TotalInterest = InvestmentAmount * AprRate ;
    printf("%.2f\n", TotalInterest) ;

    return 0 ;
}