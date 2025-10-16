#include <stdio.h>

int main() {
    int choice;
    float balance = 500.00;
    float amount;
    int running = 1;

    while (running) {
        printf("\n Banko De Iponan\n");
        printf("Please Select your Transaction\n");
        printf("[1] Balance Inquiry\n");
        printf("[2] Deposit\n");
        printf("[3] Withdraw\n");
        printf("[4] Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance: P%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid deposit amount.\n");
                } else {
                    balance += amount;
                    printf("P%.2f Deposited Successfully!\n", amount);
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid Withdrawal Amount.\n");
                } else if (balance - amount < 100) {
                    printf("Withdrawal denied! You must maintain at least P100.00 in your account.\n");
                } else if (amount > balance) {
                    printf("Insufficient Balance.\n");
                } else {
                    balance -= amount;
                    printf("You Withdrew P%.2f Successfully!\n", amount);
                }
                break;

            case 4:
                printf("Thank you for Transacting in Banko De Iponan\n");
                running = 0; 
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}