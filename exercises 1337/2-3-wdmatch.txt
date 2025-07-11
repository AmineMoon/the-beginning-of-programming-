#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
    char *start = s1; // Save the start of s1
    while (*s1 && *s2)
    {
        if (*s1 == *s2)
            s1++; // Move to next char in s1 if match found
        s2++; // Always move forward in s2
    }
    if (!*s1) // If we reached the end of s1, print it
    {
        while (*start)
            write(1, start++, 1);
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    wdmatch(argv[1], argv[2]);
    return 0;
}
