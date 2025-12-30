#include <stdio.h>

struct Transaction {
    char Description[50] ;
    float Amount ;
} ;

int main() {
    int N, I ;
    float TotalIncome = 0.0 ;
    float TotalExpense = 0.0 ;
    float NetBalance = 0.0 ;

    if (scanf("%d", &N) != 1) {
        return 1 ;
    }

    struct Transaction Transactions[N] ;

    for (I = 0 ; I < N ; I++) {
        scanf("%f %s", &Transactions[I].Amount, Transactions[I].Description) ;

        if (Transactions[I].Amount >= 0.0) {
            TotalIncome += Transactions[I].Amount ;
        } else {
            TotalExpense += -Transactions[I].Amount ;
        }
    }

    NetBalance = TotalIncome - TotalExpense ;

    printf("Total Income: %.2f\n", TotalIncome) ;
    printf("Total Expense: %.2f\n", TotalExpense) ;
    printf("Net Balance: %.2f\n", NetBalance) ;

    return 0 ;
}