/*Write a program to Create ATM simulation */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double balance;
    char pin[5];
} ATM;

ATM* create_atm(double initial_balance, const char* correct_pin) {
    ATM* atm = (ATM*)malloc(sizeof(ATM));
    atm->balance = initial_balance;
    snprintf(atm->pin, sizeof(atm->pin), "%s", correct_pin);
    return atm;
}

int authenticate(ATM* atm) {
    char entered_pin[5];
    int attempts = 3;
    while (attempts > 0) {
        printf("Enter your 4-digit PIN: ");
        scanf("%4s", entered_pin);
        if (strcmp(entered_pin, atm->pin) == 0) {
            printf("Access Granted!\n");
            return 1;
        } else {
            attempts--;
            printf("Incorrect PIN. You have %d attempts left.\n", attempts);
        }
    }
    printf("Account locked due to too many incorrect attempts.\n");
    return 0;
}

void check_balance(ATM* atm) {
    printf("Your current balance is: Rs. %.2f\n", atm->balance);
}

void deposit(ATM* atm) {
    double amount;
    printf("Enter amount to deposit: Rs. ");
    scanf("%lf", &amount);
    if (amount > 0) {
        atm->balance += amount;
        printf("Successfully deposited Rs. %.2f.\n", amount);
    } else {
        printf("Deposit amount must be greater than zero.\n");
    }
}

void withdraw(ATM* atm) {
    double amount;
    printf("Enter amount to withdraw: Rs. ");
    scanf("%lf", &amount);
    if (amount > 0) {
        if (amount <= atm->balance) {
            atm->balance -= amount;
            printf("Please collect your cash. Withdrew Rs. %.2f.\n", amount);
        } else {
            printf("Insufficient funds! You don't have enough balance.\n");
        }
    } else {
        printf("Withdrawal amount must be greater than zero.\n");
    }
}

void show_menu(ATM* atm) {
    int choice;
    while (1) {
        printf("\n=============================\n");
        printf("       ATM MAIN MENU         \n");
        printf("=============================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Cash\n");
        printf("3. Withdraw Cash\n");
        printf("4. Exit\n");
        
        printf("\nChoose an option (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance(atm);
                break;
            case 2:
                deposit(atm);
                break;
            case 3:
                withdraw(atm);
                break;
            case 4:
                printf("\nThank you for using the ATM. Have a great day!\n");
                exit(0);
            default:
                printf("Invalid option. Please choose a number between 1 and 4.\n");
        }
    }
}