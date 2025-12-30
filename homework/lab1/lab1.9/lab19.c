#include <stdio.h>

int main() {
    int ZoneCode ;
    float WeightKg ;
    float TotalCost = 0.0 ;

    if ( scanf( "%d %f", &ZoneCode, &WeightKg ) != 2 ) {
        return 1 ;
    }

    switch ( ZoneCode ) {
        case 1 :
            if ( WeightKg <= 5 ) {
                TotalCost = 50.0 ;
            } else {
                TotalCost = 80.0 ;
            }
            break ;

        case 2 :
            if ( WeightKg <= 10 ) {
                TotalCost = 150.0 ;
            } else {
                TotalCost = 250.0 ;
            }
            break ;

        case 3 :
            TotalCost = 500.0 ;
            break ;

        default :
            printf( "Invalid Zone Code\n" ) ;
            return 0 ;
    }

    printf( "%.2f\n", TotalCost ) ;

    return 0 ;
}