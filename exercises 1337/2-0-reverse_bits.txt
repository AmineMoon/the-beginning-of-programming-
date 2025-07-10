#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i = 0;

    while (i < 8)
    {
        result = (result << 1) | (octet & 1);
        octet >>= 1;
        i++;
    }
    return (result);
}

void print_bits(unsigned char octet)
{
    int i = 7;
    while (i >= 0)
    {
        if (octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    // Convert first character of input to byte
    unsigned char input = (unsigned char)argv[1][0];
    unsigned char reversed = reverse_bits(input);

    // Print original and reversed bits
    write(1, "Original: ", 10);
    print_bits(input);
    write(1, "\nReversed: ", 11);
    print_bits(reversed);
    write(1, "\n", 1);

    return 0;
}   



How It Works (Step-by-Step)
Example: Reverse 0010 0110 (38 in decimal) → 0110 0100 (100 in decimal)

Step	Operation	octet (Binary)	reversed (Binary)
0	Start	0010 0110	0000 0000
1	octet & 1 → 0	0001 0011	0000 0000
2	octet & 1 → 1	0000 1001	0000 0001
3	octet & 1 → 1	0000 0100	0000 0011
4	octet & 1 → 0	0000 0010	0000 0110
5	octet & 1 → 0	0000 0001	0000 1100
6	octet & 1 → 1	0000 0000	0001 1001
7	octet & 1 → 0	0000 0000	0011 0010
8	octet & 1 → 0	0000 0000	0110 0100









