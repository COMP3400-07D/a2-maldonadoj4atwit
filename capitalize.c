#include <stddef.h> // For NULL
#include <stdlib.h>
#include <ctype.h>

/**
 * Returns a new dynamically allocated string that is a copy of s, but with uppercase letters
 *
 * @param s The input string
 * @return  A pointer to a new string, or NULL if s is NULL
 */
char* capitalize(const char* s) {
    if ( s == NULL ) {
        return NULL ;
    }

    int len = 0 ;
    while ( s[ len ] != '\0' ) {
        len++ ;
    }

    char* result = malloc( sizeof( char ) * ( len + 1 ) ) ;
    if ( result == NULL ) {
        return NULL ;
    }

    for ( int i = 0 ; i < len ; i++ ) {
        if ( s[ i ] >= 'a' && s[ i ] <= 'z' ) {
            result[ i ] = toupper( s[ i ] ) ;
        } 
        else {
            result[ i ] = s[ i ] ;
        }
    }
    
    result[ len ] = '\0' ;

    return result ;
    
}

