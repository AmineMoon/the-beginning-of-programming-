#include <unistd.h>

void last_word(char *str)
{
    int end = 0;
    int start = 0;

    // Find the end of the last word
    while (str[end])
        end++;

    // Skip trailing spaces
    while (end >= 0 && (str[end] == ' ' || str[end] == '\t'))
        end--;

    // Mark the end of the last word
    start = end;

    // Find the start of the last word
    while (start >= 0 && (str[start] != ' ' && str[start] != '\t'))
        start--;

    // Print the last word
     while (start < end)
    write(1, &str[start++], 1);
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    last_word(argv[1]);
    write(1, "\n", 1);
    return 0;
}
