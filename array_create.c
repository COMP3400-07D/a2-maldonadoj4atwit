#include <stddef.h> // For NULL
#include <stdlib.h>

/**
 * Creates and returns an array containing all even numbers
 * between begin and end in increasing order.
 *
 * @param begin The starting integer
 * @param end   The ending integer
 * @return A pointer to an allocated int array of evens, or NULL.
 */
int* array_create_evens(int begin, int end) {
    if ( begin > end ) {
        return NULL ;
    }

    if ( begin % 2 != 0 ) {
        begin++ ;
    }

    if ( begin > end ) {
        return NULL ;
    }

    int length = ( ( end - begin ) / 2 ) + 1 ;

    int* arr = malloc( sizeof( int ) * length ) ;
    if ( arr == NULL ) {
        return NULL ;
    }

    int val = begin ;
    for ( int i = 0 ; i < length ; i++ ) {
        arr[ i ] = val ;
        val += 2 ;
    }

    return arr ;
}
