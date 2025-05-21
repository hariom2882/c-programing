#include <stdio.h>

#define MAX_ACCOUNTS 1000

struct Account { 
    int accNumber;
    char name[100];
    int pin;
    float balance;
};

struct Account accounts[MAX_ACCOUNTS];
int count = 0;

void createAccount() {
    if (count >= MAX_ACCOUNTS) {
        printf("Account limit reached.\n");
        return;
    }

    printf("\nEnter account number: ");
    scanf("%d", &accounts[count].accNumber);
    printf("Enter name: ");
    scanf(" %[^\n]", accounts[count].name);
    printf("Set 4-digit PIN: ");
    scanf("%d", &accounts[count].pin);
    printf("Enter initial deposit: ");
    scanf("%f", &accounts[count].balance);
    
    printf("Account created successfully!\n");
    count++;
}

int login(int *index) {
    int accNo, pin;
    printf("\n--- ATM Login ---\n");
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter PIN: ");
    scanf("%d", &pin);

    for (int i = 0; i < count; i++) {
        if (accounts[i].accNumber == accNo && accounts[i].pin == pin) {
            *index = i;
            return 1;
        }
    }

    printf("Invalid account number or PIN.\n");
    return 0;
}

void atmMenu(int i) {
    int option;
    float amt;
    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Logout\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Balance: %.2f\n", accounts[i].balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amt);
                accounts[i].balance += amt;
                printf("Deposit successful. New balance: %.2f\n", accounts[i].balance);
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amt);
                if (amt <= accounts[i].balance) {
                    accounts[i].balance -= amt;
                    printf("Withdrawal successful. Remaining balance: %.2f\n", accounts[i].balance);
                } else {
                    printf("Insufficient balance.\n");
                }
                break;
            case 4:
                printf("Logging out...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(option != 4);
}

int main() {
    int choice;
    int loggedInIndex;

    do {
        printf("\n=== BANKING SYSTEM ===\n");
        printf("1. Create Account\n2. ATM Login\n3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                createAccount();
                break;
            case 2:
                if (login(&loggedInIndex)) {
                    atmMenu(loggedInIndex);
                }
                break;
            case 3:
                printf("Exiting system. Goodbye!\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }
    } while(choice != 3);

    return 0;
}
