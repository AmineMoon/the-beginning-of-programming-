#include <stdlib.h>
#include <stdio.h>  // For printf in main()

char *ft_strdup(char *src)
{
    char *dest;
    int length = 0;
    int i = 0;

    // 1. Calculate string length
    while (src[length] != '\0')
        length++;

    // 2. Allocate memory (+1 for null terminator)
    dest = (char *)malloc(sizeof(char) * (length + 1));
    if (dest == NULL)
        return (NULL);

    // 3. Copy characters
    while (i < length)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // 4. Add null terminator

    return (dest);
}

int main()
{
    char *original = "Hello World";
    char *duplicate = ft_strdup(original);
    
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);
    
    free(duplicate);  // 5. Free allocated memory
    return 0;
}
