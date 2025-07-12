#include <stdlib.h>  // Required for atoi()
#include <stdio.h>

int main()
{
    char str[] = "  -1234abc";
    int num = atoi(str);
    printf("Converted number: %d\n", num);  // Output: -1234
    return 0;
}

Simple Explanation of strtol()
strtol() (String to Long) is a more powerful alternative to atoi() that converts strings to integers with better error 
handling and support for different bases (like binary, hex, etc.)

#include <stdlib.h>
#include <stdio.h>

int main() {
    const char *str = "1234abc";
    char *endptr;
    long num = strtol(str, &endptr, 10);

    printf("Converted number: %ld\n", num);  // Output: 1234
    printf("Stopped at: %s\n", endptr);     // Output: "abc"
    return 0;
} 



#include <stdlib.h>
#include <stdio.h>
#include <errno.h>  // For error detection

int main() {
    const char *str = "invalid123";
    char *endptr;
    errno = 0;  // Reset error flag
    long num = strtol(str, &endptr, 10);

    if (errno != 0 || str == endptr) {
        printf("Conversion failed!\n");
    } else {
        printf("Converted: %ld\n", num);
    }
    return 0;
}









