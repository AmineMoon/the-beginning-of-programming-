#include <unistd.h>

unsigned char swap_bits(unsigned char octet)
{
    return (octet << 4) | (octet >> 4);
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

int main(void)
{
    unsigned char test = 0x41; // 0100 0001 in binary
    unsigned char swapped = swap_bits(test);

    write(1, "Original: ", 10);
    print_bits(test);
    write(1, "\nSwapped:  ", 11);
    print_bits(swapped);
    write(1, "\n", 1);

    return 0;
}


. Step-by-Step Example
Input: octet = 0x61 (0110 0001 in binary)
Loop: Checks bits from MSB (i=7) to LSB (i=0).
i	1 << i	octet & (1 << i)	Result	Action
7	10000000	01100001 & 10000000 = 00000000	0	Prints "0"
6	01000000	01100001 & 01000000 = 01000000	!=0	Prints "1"
5	00100000	01100001 & 00100000 = 00100000	!=0	Prints "1"
4	00010000	01100001 & 00010000 = 00000000	0	Prints "0"
3	00001000	01100001 & 00001000 = 00000000	0	Prints "0"
2	00000100	01100001 & 00000100 = 00000000	0	Prints "0"
1	00000010	01100001 & 00000010 = 00000000	0	Prints "0"
0	00000001	01100001 & 00000001 = 00000001	!=0	Prints "1"
Final Output: 01100001 (same as input, proving correctness).

