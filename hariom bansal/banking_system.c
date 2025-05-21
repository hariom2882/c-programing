#include <stdio.h>

struct BankAccount {
    int accountNumber;
    char name[100];
    float balance;
    // printf("")
};

struct BankAccount account;

void createAccount() {
    printf("\nEnter Account Number: ");
    scanf("%d", &account.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account.name); // Input with spaces

    printf("Enter Initial Balance: ");
    scanf("%f", &account.balance);

    printf("\nAccount Created Successfully!\n");
}

void displayAccount() {
    printf("\n--- Account Details ---\n");
    printf("Account Number : %d\n", account.accountNumber);
    printf("Name           : %s\n", account.name);
    printf("Balance        : ₹%.2f\n", account.balance);
}

void deposit() {
    float amount;
    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0) {
        account.balance += amount;
        printf("₹%.2f deposited successfully!\n", amount);
    } else {
        printf("Invalid deposit amount.\n");
    }
}

void withdraw() {
    float amount;
    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid withdrawal amount.\n");
    } else if (amount > account.balance) {
        printf("Insufficient balance!\n");
    } else {
        account.balance -= amount;
        printf("₹%.2f withdrawn successfully!\n", amount);
    }
}

int main() {
    int choice;

    do {
        printf("\n\n=== Simple Banking System ===\n");
        printf("1. Create Account\n");
        printf("2. Display Account\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: createAccount(); break;
            case 2: displayAccount(); break;
            case 3: deposit(); break;
            case 4: withdraw(); break;
            case 5: printf("Thank you for using our banking system!\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while(choice != 5);

    return 0;
}
