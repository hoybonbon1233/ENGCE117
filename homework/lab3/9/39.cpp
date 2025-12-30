#include <stdio.h>

int main() {
    int N_Days, Day ;
    float InitialBudget ;
    float RemainingBudget ;
    float DailySpend ;

    if (scanf("%f %d", &InitialBudget, &N_Days) != 2) {
        return 1 ;
    }

    RemainingBudget = InitialBudget ;

    printf("Day | Spend | Remaining\n") ;
    printf("-----------------------\n") ;

    for (Day = 1 ; Day <= N_Days ; Day++) {
        DailySpend = 0.0 ;

        if (RemainingBudget >= 500.00) {
            DailySpend = 100.00 ;
        } else if (RemainingBudget >= 100.00) {
            DailySpend = 50.00 ;
        } else if (RemainingBudget > 0.0) {
            DailySpend = 20.00 ;
        } else {
            DailySpend = 0.0 ;
        }

        if (DailySpend > RemainingBudget) {
            DailySpend = RemainingBudget ;
        }

        RemainingBudget -= DailySpend ;

        printf("%d | %.2f | %.2f\n", Day, DailySpend, RemainingBudget) ;
    }

    printf("-----------------------\n") ;
    printf("Final Budget: %.2f\n", RemainingBudget) ;

    return 0 ;
}