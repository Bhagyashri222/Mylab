#include <stdio.h>

int main() {
    double num1, num2, sum;

    // Accept two numbers from the user
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Add the two numbers
    sum = num1 + num2;

    // Display the sum
    printf("The sum of the two numbers is: %.2lf\n", sum);

    return 0;
}
