#include <stdio.h>

int main() {
    int NMonths ;
    int Month ;
    int SuccessCount = 0 ;
    float DailyDeposit ;
    float MonthlyTotal ;

    if (scanf("%d", &NMonths) != 1) {
        return 1 ;
    }

    for (Month = 1 ; Month <= NMonths ; Month++) {
        MonthlyTotal = 0.0 ;

        if (scanf("%f", &DailyDeposit) != 1) {
            break ;
        }

        while (DailyDeposit != 0.00) {
            MonthlyTotal = MonthlyTotal + DailyDeposit ;
            
            if (scanf("%f", &DailyDeposit) != 1) {
                break ;
            }
        }

        printf("Month %d Total: %.2f\n", Month, MonthlyTotal) ;

        if (MonthlyTotal >= 500.00) {
            SuccessCount++ ;
        }
    }

    printf("Success Count: %d\n", SuccessCount) ;
    return 0 ;
}