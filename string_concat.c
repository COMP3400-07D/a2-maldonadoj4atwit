#include <stddef.h> // For NULL

/**
 * Concatenates the string in src2 to the end of src1, without exceeding src1_cap
 *
 * @param src1 The destination string
 * @param src1_cap The total capacity of src1
 * @param src2 The string to append to src1.
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if ( src1 == NULL || src2 == NULL || src1_cap <= 0 ) {
        return ;
    }

    int i = 0 ;
    
    while ( i < src1_cap && src1[ i ] != '\0' ) {
        i++ ;
    }

    int j = 0 ;
    
    while ( i < src1_cap - 1 && src2[ j ] != '\0' ) {
        src1[ i ] = src2[ j ];
        i++ ;
        j++ ;
    }

     if ( i < src1_cap ) {
        src1[ i ]  = '\0' ;
    } else {
        src1[ src1_cap - 1 ] = '\0' ;
    }
}

