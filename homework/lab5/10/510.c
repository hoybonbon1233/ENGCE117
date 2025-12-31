#include <stdio.h>

int CalculateChangeAmount(int Cost, int Paid) ;
int CountDenomination(int *ChangeRemaining, int Denomination) ;

int main() {
    int TotalCost ;
    int AmountPaid ;
    int ChangeAmount ;
    int RemainingChange ;

    int Count1000, Count500, Count100, Count50, Count20, Count10, Count5, Count2, Count1 ;

    printf("Enter Total Cost (integer): ") ;
    scanf("%d", &TotalCost) ;

    printf("Enter Amount Paid (integer): ") ;
    scanf("%d", &AmountPaid) ;

    ChangeAmount = CalculateChangeAmount(TotalCost, AmountPaid) ;

    if (ChangeAmount == -1) {
        printf("\nERROR: Amount Paid is less than Total Cost.\n") ;
        return 1 ;
    }

    RemainingChange = ChangeAmount ;

    Count1000 = CountDenomination(&RemainingChange, 1000) ;
    Count500 = CountDenomination(&RemainingChange, 500) ;
    Count100 = CountDenomination(&RemainingChange, 100) ;
    Count50 = CountDenomination(&RemainingChange, 50) ;
    Count20 = CountDenomination(&RemainingChange, 20) ;
    Count10 = CountDenomination(&RemainingChange, 10) ;
    Count5 = CountDenomination(&RemainingChange, 5) ;
    Count2 = CountDenomination(&RemainingChange, 2) ;
    Count1 = CountDenomination(&RemainingChange, 1) ;

    printf("\n--- CHANGE CALCULATION REPORT ---\n") ;
    printf("Total Cost: %d\n", TotalCost) ;
    printf("Amount Paid: %d\n", AmountPaid) ;
    printf("Change Amount: %d\n", ChangeAmount) ;

    printf("\nDenomination Breakdown:\n") ;

    if (Count1000 > 0) { printf("1000 Baht: %d\n", Count1000) ; }
    if (Count500 > 0) { printf("500 Baht: %d\n", Count500) ; }
    if (Count100 > 0) { printf("100 Baht: %d\n", Count100) ; }
    if (Count50 > 0) { printf("50 Baht: %d\n", Count50) ; }
    if (Count20 > 0) { printf("20 Baht: %d\n", Count20) ; }
    if (Count10 > 0) { printf("10 Baht: %d\n", Count10) ; }
    if (Count5 > 0) { printf("5 Baht: %d\n", Count5) ; }
    if (Count2 > 0) { printf("2 Baht: %d\n", Count2) ; }
    if (Count1 > 0) { printf("1 Baht: %d\n", Count1) ; }

    return 0 ;
}

int CalculateChangeAmount(int Cost, int Paid) {
    if (Paid >= Cost) {
        return Paid - Cost ;
    } else {
        return -1 ;
    }
}

int CountDenomination(int *ChangeRemaining, int Denomination) {
    int Count ;
    Count = *ChangeRemaining / Denomination ;
    *ChangeRemaining = *ChangeRemaining % Denomination ;
    return Count ;
}