#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char input[50];
    int n, i, largest;
    int valid;
    char choice;

    do {
        do {
            printf("Enter number of elements in the array: ");
            fgets(input, sizeof(input), stdin);

            valid = 1;
            for (i = 0; input[i] != '\0' && input[i] != '\n'; i++) {
                if (!isdigit(input[i])) {
                    valid = 0;
                    break;
                }
            }

            if (!valid) {
                printf("Please enter in numbers only.\n\n");
                continue;
            }

            n = atoi(input);

            if (n <= 0) {
                printf("Number of elements must be greater than 0.\n\n");
                valid = 0;
            }

        } while (!valid);

        int arr[n];
        printf("Enter %d elements:\n", n);
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        largest = arr[0];
        for (i = 1; i < n; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        printf("\nThe largest element in the array is: %d\n", largest);

        while (getchar() != '\n');

        char str[100];
        int vowels = 0;

        printf("\nEnter a string: ");
        fgets(str, sizeof(str), stdin);

        for (i = 0; str[i] != '\0'; i++) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }
        }

        printf("The number of vowels in the string is: %d\n", vowels);

        printf("\nWould you like to answer again? (Y/N): ");
        scanf(" %c", &choice);

        while (getchar() != '\n');

        printf("\n");

    } while (choice == 'Y' || choice == 'y');

    printf("thank you for answering!\n");

    return 0;
}
