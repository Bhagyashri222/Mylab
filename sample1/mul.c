#include <stdio.h>

int main() {
    double num1, num2, sum, multiplier, result;

    // Accept two numbers from the user
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Add the two numbers
    sum = num1 + num2;

    // Display the sum
    printf("The sum of the two numbers is: %.2lf\n", sum);

    // Accept another number from the user
    printf("Enter a number to multiply the sum with: ");
    scanf("%lf", &multiplier);

    // Multiply the sum by the entered number
    result = sum * multiplier;

    // Display the result
    printf("The result of multiplying the sum by %.2lf is: %.2lf\n", multiplier, result);

    return 0;
}
