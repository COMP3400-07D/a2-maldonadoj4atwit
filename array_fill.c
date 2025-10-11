#include <stddef.h> // For NULL

/**
 * Fills an array with consecutive integers from begin to end in increasing order,
 * stopping early if the array runs out of space.
 * 
 * @param array Pointer to the array to fill
 * @param array_len Maximum number of elements to fill
 * @param begin Beginning integer
 * @param end Ending integer 
 * @return Number of elements actually filled
 */
int array_fill(int* array, int array_len, int begin, int end) {
    if ( array == NULL || array_len <= 0 ) {
        return 0 ;
    }

    int count = 0 ;
    for ( int i = begin ; i <= end && count < array_len ; i++ ) {
        array[ count ] = i ;
        count++ ;
    }

    return count ;
}
