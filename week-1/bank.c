#include <stdio.h>

// Global variable to store account balance
float balance = 5000.0;  // Initial balance

// Function to check balance
void checkBalance() {
    printf("Your current balance is: $%.2f\n", balance);
}

// Function to deposit money
void deposit(float amount) {
    if (amount > 0) {
        balance += amount;
        printf("Successfully deposited $%.2f\n", amount);
    } else {
        printf("Invalid deposit amount!\n");
    }
    checkBalance(); // Show updated balance
}

// Function to withdraw money
void withdraw(float amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("Successfully withdrawn $%.2f\n", amount);
    } else if (amount > balance) {
        printf("Insufficient balance!\n");
    } else {
        printf("Invalid withdrawal amount!\n");
    }
    checkBalance(); // Show updated balance
}

int main() {
    int choice;
    float amount;

    while (1) {
        // Display menu options
        printf("\n===== Banking System Menu =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                printf("\nEnter amount to deposit: $");
                scanf("%f", &amount);
                deposit(amount);
                break;
            case 3:
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);
                withdraw(amount);
                break; 
            case 4:
                printf("\nThank you for using our banking system. Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
