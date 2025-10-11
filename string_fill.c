#include <stddef.h> // For NULL

/**
 Fills a destination character array with a repeated character, forming a valid null-terminated string.
 * If `dest` is NULL, the function does nothing.
 *
 * @param dest The destination character array (string buffer) to fill.
 * @param dest_cap The total capacity of the destination buffer, including space for the null terminator.
 * @param c The character used to fill the string.
 * @return returns null if dest is NULL
 */
void string_fill(char dest[], int dest_cap, char c) {
    if ( dest == NULL || dest_cap <= 0 ) {
        return ;
    }

    for ( int i = 0 ; i < dest_cap - 1 ; i++ ) {
        dest[ i ] = c ;
    }

    dest[ dest_cap - 1 ] = '\0' ;
}
