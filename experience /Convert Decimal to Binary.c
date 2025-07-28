#include <stdio.h>

void decimalToBinary(int n) {
    // Handle 0 explicitly
    if (n == 0) {
        printf("0");
        return;
    }

    // Array to store binary digits
    int binary[32];
    int i = 0;

    // Convert decimal to binary
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int number;
    
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
    printf("Binary equivalent: ");
    decimalToBinary(number);
    
    return 0;
}
