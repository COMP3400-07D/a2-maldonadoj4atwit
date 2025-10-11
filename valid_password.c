#include <stddef.h> // For NULL
#include <stdbool.h> // For true/false
#include <ctype.h> 

/**
 * 
 * Checks whether the given string is a valid password according to these rules:  
 * 
 * The password length must be between 6 and 10 characters (inclusive).</li>
 * Each character must be a lowercase letter (a–z), uppercase letter (A–Z), or digit (0–9).</li>
 * The password must contain at least two lowercase letters.</li>
 * The password must contain at least two uppercase letters.</li>
 *
 * @param s A pointer to a null-terminated string representing the password 
 * to validate. If s is NULL, the function returns false.
 *
 * @return true if the password meets all the requirements; false otherwise.
 */
bool valid_password(const char* s) {
    if ( s == NULL ) {
        return false ;
    }

    int length = 0 ;
    int lower_count = 0 ;
    int upper_count = 0 ;

    for ( int i = 0; s[i] != '\0'; i++ ) {
        char c = s[ i ] ;
        length++ ;

        if ( islower( c ) ) {
            lower_count++ ;
        } 
        else if ( isupper( c ) ) {
            upper_count++ ;
        } 
        else if ( !isdigit( c ) ) {
            return false ;
        }
    }

    if ( length < 6 || length > 10 ) {
        return false ;
    }
    if ( lower_count < 2 ) {
        return false ;
    }
    if ( upper_count < 2 ) {
        return false ;
    }

    return true; 
}
