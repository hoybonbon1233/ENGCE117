#include <stdio.h>

#define NUM_EMPLOYEES 4

struct Employee {
    int Id ;
    int Salary ;
} ;

void FindMinMaxSalary(struct Employee Emps[], int Size, int *Max, int *Min) {
    int I ;

    *Max = Emps[0].Salary ;
    *Min = Emps[0].Salary ;

    for (I = 1 ; I < Size ; I++) {
        if (Emps[I].Salary > *Max) {
            *Max = Emps[I].Salary ;
        }
        if (Emps[I].Salary < *Min) {
            *Min = Emps[I].Salary ;
        }
    }
}

int main() {
    struct Employee StaffData[NUM_EMPLOYEES] ;
    int MaxSalary ;
    int MinSalary ;
    int I ;

    printf("Enter data for %d employees:\n", NUM_EMPLOYEES) ;

    for (I = 0 ; I < NUM_EMPLOYEES ; I++) {
        printf("--- Employee %d ---\n", I + 1) ;
        printf("Enter ID: ") ;
        scanf("%d", &StaffData[I].Id) ;
        printf("Enter Salary: ") ;
        scanf("%d", &StaffData[I].Salary) ;
    }

    FindMinMaxSalary(StaffData, NUM_EMPLOYEES, &MaxSalary, &MinSalary) ;

    printf("\n--- EMPLOYEE SALARY SUMMARY ---\n") ;
    printf("ID     | Salary\n") ;
    printf("-------|---------\n") ;

    for (I = 0 ; I < NUM_EMPLOYEES ; I++) {
        printf("%-6d | %d\n", StaffData[I].Id, StaffData[I].Salary) ;
    }

    printf("\nMaximum Salary Found: %d\n", MaxSalary) ;
    printf("Minimum Salary Found: %d\n", MinSalary) ;

    return 0 ;
}