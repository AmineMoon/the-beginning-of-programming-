int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;
    
    // 1. Skip whitespace
    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;
    
    // 2. Handle optional sign
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    
    // 3. Convert digits to integer
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    
    // 4. Apply sign and return
    return (sign * result);
}
