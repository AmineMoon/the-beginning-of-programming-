#include <stdio.h>
#include <stdbool.h>

bool isNumberPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isNumberPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is NOT a palindrome.\n", num);
    
    return 0;
}
