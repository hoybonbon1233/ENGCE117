#include <stdio.h>

struct Employee {
    int Id ;
    int GrossSalary ;
    int Bonus ;
    int TotalIncome ;
} ;

int CalculateNetSalary(int TotalIncome) {
    float TaxAmount ;
    int NetSalary ;

    if (TotalIncome > 30000) {
        TaxAmount = TotalIncome * 0.10 ;
    } else {
        TaxAmount = TotalIncome * 0.05 ;
    }

    NetSalary = TotalIncome - (int)TaxAmount ;
    return NetSalary ;
}

int main() {
    struct Employee Emp ;
    int NetSalary ;

    printf("Enter Employee ID: ") ;
    scanf("%d", &Emp.Id) ;

    printf("Enter Gross Salary: ") ;
    scanf("%d", &Emp.GrossSalary) ;

    printf("Enter Bonus: ") ;
    scanf("%d", &Emp.Bonus) ;

    Emp.TotalIncome = Emp.GrossSalary + Emp.Bonus ;

    NetSalary = CalculateNetSalary(Emp.TotalIncome) ;

    printf("\n--- EMPLOYEE SALARY REPORT ---\n") ;
    printf("ID: %d\n", Emp.Id) ;
    printf("Gross Salary: %d\n", Emp.GrossSalary) ;
    printf("Bonus: %d\n", Emp.Bonus) ;
    printf("Total Income: %d\n", Emp.TotalIncome) ;
    printf("Net Salary: %d\n", NetSalary) ;

    return 0 ;
}