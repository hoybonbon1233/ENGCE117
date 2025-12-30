#include <stdio.h>
int main() {
    int ClearanceLevel, Age, IsActive ;
    if ( scanf( "%d %d %d", &ClearanceLevel, &Age, &IsActive ) != 3 ) {
        return 1 ;
    }
    if ( IsActive == 1 ) {
        if ( ClearanceLevel == 3 ) {
            printf( "Access Granted" ) ;
        } else if ( ClearanceLevel == 2 && Age >= 25 ) {
            printf( "Access Granted" ) ;
        } else {
            printf( "Access Denied" ) ;
        }
    } else {
        printf( "Access Denied" ) ;
    }
    return 0 ;
}