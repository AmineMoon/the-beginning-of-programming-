#include <unistd.h>

void rot13(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str = 'a' + (*str - 'a' + 13) % 26;
        else if (*str >= 'A' && *str <= 'Z')
            *str = 'A' + (*str - 'A' + 13) % 26;
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

    rot13(argv[1]);
    write(1, "\n", 1);
    return 0;
}
