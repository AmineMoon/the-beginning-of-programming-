#include <unistd.h>

void alpha_mirror(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str = 'z' - (*str - 'a');
        else if (*str >= 'A' && *str <= 'Z')
            *str = 'Z' - (*str - 'A');
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
    alpha_mirror(argv[1]);
    write(1, "\n", 1);
    return 0;
}  

/* Step-by-Step Execution (Example: "abc")

1. Character Transformation
Character	ASCII	Mirror Formula	Result
'a'	97	'z' - ('a' - 'a') = 'z' - 0	'z'
'b'	98	'z' - ('b' - 'a') = 'z' - 1	'y'
'c'	99	'z' - ('c' - 'a') = 'z' - 2	'x'
2. Output
Input: "abc" → Output: "zyx\n" \* 










