#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter positive numbers to ADD (zero or negative number to STOP)\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number <= 0) {
            
            break;
        }

        sum += number; 
    }

    printf("Total sum is: %d\n", sum);

    return 0;
}