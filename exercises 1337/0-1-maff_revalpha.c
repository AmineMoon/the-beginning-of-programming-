#include <unistd.h>

int main(void)
{
    char c = 'z';
    
    while (c >= 'a')
    {
        if ((c - 'a') % 2 == 0)  // Even position (z, x, v, ...)
        {
            char upper = c - 32;
            write(1, &upper, 1);
        }
        else  // Odd position (y, w, u, ...)
        {
            write(1, &c, 1);
        }
        c--;
    }
    write(1, "\n", 1);
    return 0;
}
