#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student *Child ) {
    if ( Child->sex == 'M' ) {
        Child->gpa = Child->gpa * 1.10 ;
    }
    else if ( Child->sex == 'F' ) {
        Child->gpa = Child->gpa * 1.20 ;
        if ( Child->gpa > 4.0 ) {
            Child->gpa = 4.0 ;
        }
    }
}

int main() {
    struct student Aboy ;
    Aboy.sex = 'M' ;
    Aboy.gpa = 3.00 ;
    upgrade( &Aboy ) ;
    printf( "%.2f", Aboy.gpa ) ;
    return 0 ;
}
