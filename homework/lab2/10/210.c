#include <stdio.h>

int main() {
    int NPeriods, CmdCode, I ;
    float InitialBalance, PenaltyFee, Amount ;
    float CurrentBalance ;
    float TotalPenalties = 0.0 ;
    float Apr, Interest ;

    if (scanf("%f %f %d", &InitialBalance, &PenaltyFee, &NPeriods) != 3) {
        return 1 ;
    }

    CurrentBalance = InitialBalance ;
    printf("Starting Balance: %.2f\n", InitialBalance) ;

    for (I = 1 ; I <= NPeriods ; I++) {
        if (scanf("%d %f", &CmdCode, &Amount) != 2) {
            break ;
        }

        printf("--- Month %d ---\n", I) ;

        switch (CmdCode) {
            case 1:
                CurrentBalance += Amount ;
                printf("Deposit: %.2f\n", Amount) ;
                break ;

            case 2:
                if (Amount <= CurrentBalance) {
                    CurrentBalance -= Amount ;
                    printf("Withdrawal: %.2f\n", Amount) ;
                } else {
                    TotalPenalties += PenaltyFee ;
                    printf("WITHDRAWAL FAILED. Penalty %.2f applied.\n", PenaltyFee) ;
                }
                break ;

            case 3:
                if (CurrentBalance < 1000.00) {
                    Apr = 1.0 ;
                } else {
                    Apr = 2.5 ;
                }
                
                Interest = CurrentBalance * (Apr / 100.0 / 12.0) ;
                CurrentBalance += Interest ;
                printf("Interest: %.2f (Rate: %.1f%%)\n", Interest, Apr) ;
                break ;

            default:
                printf("Error: Invalid Command.\n") ;
        }
    }

    printf("Final Balance: %.2f\n", CurrentBalance) ;
    printf("Total Penalties: %.2f\n", TotalPenalties) ;

    return 0 ;
}