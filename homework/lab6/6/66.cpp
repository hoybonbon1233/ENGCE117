#include <stdio.h>

#define SIZE 5

int CalculateNetBalance(int *TransArray, int Size, int *StatusPtr) {
    int I ;
    int CurrentBalance = 0 ;

    for (I = 0 ; I < Size ; I++) {
        CurrentBalance += *(TransArray + I) ;
    }

    if (CurrentBalance >= 0) {
        *StatusPtr = 1 ;
    } else {
        *StatusPtr = 0 ;
    }

    return CurrentBalance ;
}

int main() {
    int Transactions[SIZE] ;
    int NetBalance ;
    int FinanceStatus ;
    int I ;

    printf("Enter %d transactions (Income +, Expense -):\n", SIZE) ;
    
    for (I = 0 ; I < SIZE ; I++) {
        printf("Transaction %d: ", I + 1) ;
        scanf("%d", &Transactions[I]) ;
    }

    NetBalance = CalculateNetBalance(Transactions, SIZE, &FinanceStatus) ;

    printf("\n--- PERSONAL FINANCE REPORT ---\n") ;
    printf("Transactions Recorded:") ;

    for (I = 0 ; I < SIZE ; I++) {
        printf(" %d", Transactions[I]) ;
    }
    printf("\n") ;

    printf("Net Balance: %d\n", NetBalance) ;
    printf("Status: ") ;

    if (FinanceStatus == 1) {
        printf("PROFIT\n") ;
    } else {
        printf("LOSS\n") ;
    }

    return 0 ;
}