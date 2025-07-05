#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a;
    int b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);  // Pass addresses of variables
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
