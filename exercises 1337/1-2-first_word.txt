#include <unistd.h>

void first_word(char *str)
{
    // Skip leading spaces/tabs
    while (*str == ' ' || *str == '\t')
        str++;
    
    // Print characters until next space/tab or end of string
    while (*str && *str != ' ' && *str != '\t')
    {
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    first_word(argv[1]);
    write(1, "\n", 1);
    return 0;
}
