/* Function to generate a unique hash code for each block */

#include <stdio.h>

/**
 * Generate a hash key from a string.
 *
 * @parameters
 * string : A string.
 * @return
 * A unique hash key for the string.
 */

int string_hash(void *string)
{
    int result = 5381;
    unsigned char *p;

    p = (unsigned char *) string;

    while (*p != '\0') {
       
        result = (result << 5) + result + *p;
        ++p;
    }

    return result;
}
