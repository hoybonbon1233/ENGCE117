#include <stdio.h>

#define MONTHS 3

int AnalyzeProfitability(int *RevPtr, int *ExpPtr, int Size, int *StatusPtr) ;
void GetMonthlyData(int Array[], int Size, const char *Type) ;
void PrintMonthlyTotal(int Array[], int Size, const char *Type) ;

int main() {
    int MonthlyRevenue[MONTHS] ;
    int MonthlyExpense[MONTHS] ;
    int NetProfit ;
    int BusinessStatus ;

    GetMonthlyData(MonthlyRevenue, MONTHS, "REVENUE") ;
    GetMonthlyData(MonthlyExpense, MONTHS, "EXPENSE") ;

    NetProfit = AnalyzeProfitability(MonthlyRevenue, MonthlyExpense, MONTHS, &BusinessStatus) ;

    printf("\n--- 3 MONTH FINANCIAL ANALYSIS REPORT ---\n") ;
    
    PrintMonthlyTotal(MonthlyRevenue, MONTHS, "REVENUE") ;
    PrintMonthlyTotal(MonthlyExpense, MONTHS, "EXPENSE") ;

    printf("\nNET PROFIT: %d\n", NetProfit) ;
    printf("BUSINESS STATUS: ") ;

    if (BusinessStatus == 1) {
        printf("PROJECT IS PROFITABLE\n") ;
    } else {
        printf("PROJECT IS UNPROFITABLE\n") ;
    }

    return 0 ;
}

int AnalyzeProfitability(int *RevPtr, int *ExpPtr, int Size, int *StatusPtr) {
    int I ;
    int TotalRev = 0 ;
    int TotalExp = 0 ;
    int CurrentNet ;

    for (I = 0 ; I < Size ; I++) {
        TotalRev += *(RevPtr + I) ;
        TotalExp += *(ExpPtr + I) ;
    }

    CurrentNet = TotalRev - TotalExp ;

    if (CurrentNet >= 0) {
        *StatusPtr = 1 ;
    } else {
        *StatusPtr = 0 ;
    }

    return CurrentNet ;
}

void GetMonthlyData(int Array[], int Size, const char *Type) {
    int I ;
    printf("\nEnter %d months of %s values:\n", Size, Type) ;
    for (I = 0 ; I < Size ; I++) {
        printf("Month %d %s: ", I + 1, Type) ;
        scanf("%d", &Array[I]) ;
    }
}

void PrintMonthlyTotal(int Array[], int Size, const char *Type) {
    int I ;
    int Total = 0 ;
    
    for (I = 0 ; I < Size ; I++) {
        Total += Array[I] ;
    }
    
    printf("TOTAL %s: %d\n", Type, Total) ;
}