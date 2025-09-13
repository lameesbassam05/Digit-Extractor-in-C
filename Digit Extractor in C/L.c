#include <stdio.h>
int main()
{
    int num = 0;
    printf("Enter a Five-digit integer number\n");
    scanf("%d", &num);

    // Extract and print each number separately using arithmetic operations.
    printf("%d\t", num / 10000);        // Extract the first number (tens of thousands)
    printf("%d\t", num % 10000 / 1000); // Extract the second number (thousands)
    printf("%d\t", num % 1000 / 100);   // Extract the third digit (hundreds)
    printf("%d\t", num % 100 / 10);     // Extract the fourth digit (tens)
    printf("%d\t", num % 10 / 1);       // Extract the fifth digit (ones)

    return 0;
}