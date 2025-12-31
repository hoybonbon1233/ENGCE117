#include <stdio.h>

int main() {
    int GrossSalary ;
    float TaxRate = 0.0 ;
    float TaxAmount = 0.0 ;
    float NetSalary = 0.0 ;

    printf("Enter Gross Salary (THB/month, integer): ") ;
    scanf("%d", &GrossSalary) ;

    if (GrossSalary >= 50000) {
        TaxRate = 0.10 ;
    } else if (GrossSalary >= 20000) {
        TaxRate = 0.05 ;
    } else {
        TaxRate = 0.0 ;
    }

    TaxAmount = GrossSalary * TaxRate ;
    NetSalary = (float)GrossSalary - TaxAmount ;

    printf("\n--- SALARY CALCULATION REPORT ---\n") ;
    printf("Gross Salary: %d THB\n", GrossSalary) ;
    printf("Tax Rate Applied: %.0f%%\n", TaxRate * 100) ;
    printf("Tax Amount Deducted: %.2f THB\n", TaxAmount) ;
    printf("Net Salary: %.2f THB\n", NetSalary) ;

    return 0 ;
}