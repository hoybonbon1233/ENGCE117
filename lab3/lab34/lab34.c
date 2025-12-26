#include <stdio.h>

struct student {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void GetStudent(struct student Child[][10], int *Room) {
    printf("Enter number of classrooms (rooms): ") ;
    scanf("%d", Room) ;
    
    for (int I = 0; I < *Room; I++) {
        printf("\nClassroom %d:\n", I + 1) ;
        printf("Enter number of students: ") ;
        int NumStudents ;
        scanf("%d", &NumStudents) ;
        
        for (int J = 0; J < NumStudents && J < 10; J++) {
            printf("Student %d:\n", J + 1) ;
            printf("  Name: ") ;
            scanf("%s", Child[I][J].name) ;
            printf("  Age: ") ;
            scanf("%d", &Child[I][J].age) ;
            printf("  Sex (M/F): ") ;
            scanf(" %c", &Child[I][J].sex) ;
            printf("  GPA: ") ;
            scanf("%f", &Child[I][J].gpa) ;
        }
    }
}

int main(void) {
    struct student Children[20][10] ;
    int Group ;
    
    GetStudent( Children, &Group ) ;
    
    printf( "\n===== Student Data =====\n" ) ;
    for ( int I = 0; I < Group; I++ ) {
        printf( "\nClassroom %d:\n", I + 1 ) ;
        for ( int J = 0; J < 10; J++ ) {
            if (Children[I][J].name[0] != '\0') {
                printf("  %s | Age: %d | Sex: %c | GPA: %.2f",
                       Children[I][J].name,
                       Children[I][J].age,
                       Children[I][J].sex,
                       Children[I][J].gpa) ;
            }
        }
    }
    
    return 0 ;
}
