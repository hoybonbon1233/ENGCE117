#include <stdio.h>
#include <stdlib.h>

int *KnapsackDP( int *w, int *v, int n, int wx ) ;

int main() {
    int n = 5, wx = 11 ;
    int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
    int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
    int *x ;
    x = KnapsackDP( w, v, n, wx ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", x[ i ] ) ;
    }
    return 0 ;
}

int *KnapsackDP( int *w, int *v, int n, int wx ) {
    int i, j ;
    int **u = (int **)malloc( ( n + 1 ) * sizeof( int * ) ) ;
    for( i = 0 ; i <= n ; i++ ) {
        u[ i ] = (int *)malloc( ( wx + 1 ) * sizeof( int ) ) ;
    }
    for( i = 0 ; i <= n ; i++ ) {
        for( j = 0 ; j <= wx ; j++ ) {
            if( i == 0 || j == 0 ) {
                u[ i ][ j ] = 0 ;
            } else if( w[ i - 1 ] <= j ) {
                int a = v[ i - 1 ] + u[ i - 1 ][ j - w[ i - 1 ] ] ;
                int b = u[ i - 1 ][ j ] ;
                if( a > b ) {
                    u[ i ][ j ] = a ;
                } else {
                    u[ i ][ j ] = b ;
                }
            } else {
                u[ i ][ j ] = u[ i - 1 ][ j ] ;
            }
        }
    }
    int *x = (int *)malloc( n * sizeof( int ) ) ;
    for( i = 0 ; i < n ; i++ ) {
        x[ i ] = 0 ;
    }
    int res = u[ n ][ wx ] ;
    int curr_w = wx ;
    for( i = n ; i > 0 && res > 0 ; i-- ) {
        if( res != u[ i - 1 ][ curr_w ] ) {
            x[ i - 1 ] = 1 ;
            res = res - v[ i - 1 ] ;
            curr_w = curr_w - w[ i - 1 ] ;
        }
    }
    for( i = 0 ; i <= n ; i++ ) {
        free( u[ i ] ) ;
    }
    free( u ) ;
    return x ;
}