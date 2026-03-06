#include <stdio.h>
#include <stdlib.h>

int *Dijkstra( int *L, int n ) ;

int main() {
    int n = 5, i = 0, j = 0, *d, *g ;
    g = (int *)malloc( n * n * sizeof( int ) ) ;
    for( i = 0 ; i < n ; i++ ) {
        for( j = 0 ; j < n ; j++ ) {
            g[ i * n + j ] = -1 ;
        }
    }
    g[ 0 * n + 1 ] = 100 ;
    g[ 0 * n + 2 ] = 80 ;
    g[ 0 * n + 3 ] = 30 ;
    g[ 0 * n + 4 ] = 10 ;
    g[ 1 * n + 2 ] = 20 ;
    g[ 3 * n + 1 ] = 20 ;
    g[ 3 * n + 2 ] = 40 ;
    g[ 4 * n + 3 ] = 10 ;
    d = Dijkstra( g, n ) ;
    for( i = 0 ; i < n - 1 ; i++ ) {
        printf( "%d ", d[ i ] ) ;
    }
    return 0 ;
}

int *Dijkstra( int *L, int n ) {
    int *d = (int *)malloc( n * sizeof( int ) ) ;
    int *visited = (int *)malloc( n * sizeof( int ) ) ;
    int i, j, min, u ;
    for( i = 0 ; i < n ; i++ ) {
        d[ i ] = L[ i ] ;
        visited[ i ] = 0 ;
    }
    visited[ 0 ] = 1 ;
    d[ 0 ] = 0 ;
    for( i = 1 ; i < n ; i++ ) {
        min = 999999 ;
        u = -1 ;
        for( j = 0 ; j < n ; j++ ) {
            if( visited[ j ] == 0 && d[ j ] != -1 && d[ j ] < min ) {
                min = d[ j ] ;
                u = j ;
            }
        }
        if( u != -1 ) {
            visited[ u ] = 1 ;
            for( j = 0 ; j < n ; j++ ) {
                if( visited[ j ] == 0 && L[ u * n + j ] != -1 ) {
                    if( d[ j ] == -1 || d[ u ] + L[ u * n + j ] < d[ j ] ) {
                        d[ j ] = d[ u ] + L[ u * n + j ] ;
                    }
                }
            }
        }
    }
    int *ans = (int *)malloc( ( n - 1 ) * sizeof( int ) ) ;
    for( i = 1 ; i < n ; i++ ) {
        ans[ i - 1 ] = d[ i ] ;
    }
    return ans ;
}