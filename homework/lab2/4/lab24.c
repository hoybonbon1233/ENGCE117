#include <stdio.h>

int main() {
    float Principal ;
    float MonthlyPayment ;
    float Interest ;
    int MonthCount = 0 ;
    float InterestRate = 0.01 ;
    float Penalty = 10.0 ;

    if (scanf("%f %f", &Principal, &MonthlyPayment) != 2) {
        return 1 ;
    }

    while (Principal > 0) {
        MonthCount++ ;
        Interest = Principal * InterestRate ;
        Principal = Principal + Interest ;

        if (MonthlyPayment < Interest) {
            Principal = Principal + Penalty ;
        }

        Principal = Principal - MonthlyPayment ;
        printf("Month %d: %.2f\n", MonthCount, Principal) ;
    }

    printf("Loan settled in %d months.\n", MonthCount) ;
    return 0 ;
}