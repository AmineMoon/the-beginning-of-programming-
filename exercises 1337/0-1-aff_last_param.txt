#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    char *last_arg = argv[argc - 1];   // this is important because this is the method to get the last item
    
    while (*last_arg)
    {
        write(1, last_arg, 1);
        last_arg++;
    }
    write(1, "\n", 1);
    return 0;
}
