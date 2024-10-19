#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the last digit
    lastDigit = num % 10;

    // Find the first digit
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }

    // Calculate the sum of the first and last digit
    sum = firstDigit + lastDigit;

    // Output the result
    printf("The sum of the first and last digit is: %d\n", sum);

    return 0;
}

