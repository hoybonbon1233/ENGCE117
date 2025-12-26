#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student (*GetStudent(int *Room))[10] {
    struct student (*Children)[10] = (struct student (*)[10])malloc(sizeof(struct student) * 10) ;
    
    printf("Enter number of students: ") ;
    scanf("%d", Room) ;
    
    for (int I = 0; I < *Room && I < 10; I++) {
        printf("Student %d:\n", I + 1) ;
        printf("  Name: ") ;
        scanf("%s", (*Children)[I].name) ;
        printf("  Age: ") ;
        scanf("%d", &(*Children)[I].age) ;
        printf("  Sex (M/F): ") ;
        scanf(" %c", &(*Children)[I].sex) ;
        printf("  GPA: ") ;
        scanf("%f", &(*Children)[I].gpa) ;
    }
    
    return Children ;
}

int main(void) {
    struct student (*Children)[10] ;
    int Group ;
    
    Children = GetStudent(&Group) ;
    
    printf("\n===== Student Data =====\n") ;
    for (int I = 0; I < Group; I++) {
        printf("Student %d: %s | Age: %d | Sex: %c | GPA: %.2f\n",
               I + 1,
               (*Children)[I].name,
               (*Children)[I].age,
               (*Children)[I].sex,
               (*Children)[I].gpa) ;
    }
    
    free(Children) ;
    return 0 ;
}
