#include <stdio.h>

int main() {
    char name;
    char section;
    float num1, num2;

    // Input name and section
    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin); // use fgets to allow spaces in name

    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    // Input two numbers
    printf("\nEnter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Output
    printf("\nStudent Calculator\n");
    printf("Student name: %s", name);
    printf("Section: %s", section);

    printf("Results:\n");
    printf("%.0f + %.0f = %.0f\n", num1, num2, num1 + num2);
    printf("%.0f - %.0f = %.0f\n", num1, num2, num1 - num2);
    printf("%.0f * %.0f = %.0f\n", num1, num2, num1 * num2);
    printf("%.0f / %.0f = %.2f\n", num1, num2, num1 / num2);

    return 0;

}
