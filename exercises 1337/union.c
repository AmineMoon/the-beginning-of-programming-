#include <unistd.h>

void union_str(char *s1, char *s2)
{
    int seen[256] = {0}; // Track seen characters (ASCII)
    int i = 0;

    // Process s1
    while (s1[i])
    {
        if (!seen[(unsigned char)s1[i]])
        {
            write(1, &s1[i], 1);
            seen[(unsigned char)s1[i]] = 1;
        }
        i++;
    }

    // Process s2
    i = 0;
    while (s2[i])
    {
        if (!seen[(unsigned char)s2[i]])
        {
            write(1, &s2[i], 1);
            seen[(unsigned char)s2[i]] = 1;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    union_str(argv[1], argv[2]);
    write(1, "\n", 1);
    return 0;
}  

/*Step-by-Step Execution (Example: ./union "abc" "bcd")
1. Initialization
s1 = "abc", s2 = "bcd"

seen[256] = {0} (all zeros, no characters seen yet)

2. Process s1 ("abc")
Character	seen[c]	Action	Output
'a'	0	Print 'a', mark seen['a']=1	a
'b'	0	Print 'b', mark seen['b']=1	ab
'c'	0	Print 'c', mark seen['c']=1	abc
3. Process s2 ("bcd")
Character	seen[c]	Action	Output
'b'	1	Skip (already seen)	abc
'c'	1	Skip (already seen)	abc
'd'	0	Print 'd', mark seen['d']=1	abcd
4. Final Output
abcd\n

Key Features
No Duplicates: Uses seen[256] to track printed characters.

Order Preserved: Follows the sequence of characters in s1 first, then s2.

Efficient: O(n + m) time (where n and m are string lengths).

Handles All ASCII Characters (including extended chars).*/








