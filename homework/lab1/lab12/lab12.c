#include <stdio.h>
int main() {
    int PlanCode ;
    float DataUsageGB ;
    float TotalBill = 0.0 ; 

    if (scanf("%d %f", &PlanCode, &DataUsageGB) != 2) {
        return 1 ;
    }
    if (PlanCode == 1) {
        if (DataUsageGB <= 10) {
            TotalBill = 299 ;
        } else {
            TotalBill = 299 + 10 * (DataUsageGB - 10) ;
        }
        printf("%.2f\n", TotalBill) ;
    } else if (PlanCode == 2) {
        if (DataUsageGB <= 20) {
            TotalBill = 599 ;
        } else {
            TotalBill = 599 + 50 + 5 * (DataUsageGB - 20) ;
        }
        printf("%.2f\n", TotalBill) ;
    } else {
        printf("Invalid Plan Code\n") ;
    }
    return 0 ;
}