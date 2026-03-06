#include <stdio.h>
#include <stdlib.h>

int *KnapsackGreedy( int *w, int *v, int n, int wx ) ;

int main() {
    int n = 5, wx = 11 ;
    int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
    int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
    int *x = KnapsackGreedy( w, v, n, wx ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", x[ i ] ) ;
    }
    return 0 ;
}

int *KnapsackGreedy( int *w, int *v, int n, int wx ) {
    int *x = (int *)malloc( n * sizeof( int ) ) ;
    int *considered = (int *)malloc( n * sizeof( int ) ) ;
    int i, j, best_idx ;
    float max_ratio ;
    for( i = 0 ; i < n ; i++ ) {
        x[ i ] = 0 ;
        considered[ i ] = 0 ;
    }
    for( i = 0 ; i < n ; i++ ) {
        best_idx = -1 ;
        max_ratio = -1.0 ;
        for( j = 0 ; j < n ; j++ ) {
            if( considered[ j ] == 0 ) {
                float ratio = (float)v[ j ] / w[ j ] ;
                if( ratio > max_ratio ) {
                    max_ratio = ratio ;
                    best_idx = j ;
                }
            }
        }
        if( best_idx != -1 ) {
            considered[ best_idx ] = 1 ;
            if( w[ best_idx ] <= wx ) {
                x[ best_idx ] = 1 ;
                wx -= w[ best_idx ] ;
            }
        }
    }
    free( considered ) ;
    return x ;
}