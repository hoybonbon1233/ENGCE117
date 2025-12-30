#include <stdio.h>

int main() {
    int InitialStock, N, CmdCode, Quantity, I ;
    float PenaltyFee ;
    int CurrentStock ;
    float TotalPenalties = 0.0 ;

    if (scanf("%d %f %d", &InitialStock, &PenaltyFee, &N) != 3) {
        return 1 ;
    }

    CurrentStock = InitialStock ;

    for (I = 0 ; I < N ; I++) {
        if (scanf("%d %d", &CmdCode, &Quantity) != 2) {
            break ;
        }

        switch (CmdCode) {
            case 1:
                CurrentStock += Quantity ;
                printf("Received %d units.\n", Quantity) ;
                break ;

            case 2:
                if (Quantity <= 0) {
                    printf("Error: Quantity must be positive.\n") ;
                } else if (Quantity <= CurrentStock) {
                    CurrentStock -= Quantity ;
                    printf("Shipped %d units.\n", Quantity) ;
                } else {
                    TotalPenalties += PenaltyFee ;
                    printf("FAILURE: Insufficient stock. PENALTY %.2f added.\n", PenaltyFee) ;
                }
                break ;

            case 3:
                printf("Stock: %d, Total Penalties: %.2f\n", CurrentStock, TotalPenalties) ;
                break ;

            default:
                printf("Error: Invalid Command.\n") ;
        }
    }

    return 0 ;
}