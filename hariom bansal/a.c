#include <stdio.h>

int main() {
    int accountNumber = 0;
    char name[100];
    float balance = 0;
    int choice;
    float amount;

    printf("Welcome to Simple Bank\n");
    printf("Create an Account:\n");

    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. View Account\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nAccount Number: %d\n", accountNumber);
            printf("Name: %s\n", name);
            printf("Balance: %.2f\n", balance);
        } else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance += amount;
                printf("Deposit successful. New balance: %.2f\n", balance);
            } else {
                printf("Invalid amount.\n");
            }
        } else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Withdrawal successful. New balance: %.2f\n", balance);
            } else {
                printf("Invalid or insufficient balance.\n");
            }
        } else if (choice == 4) {
            printf("Thank you for using Simple Bank!\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
