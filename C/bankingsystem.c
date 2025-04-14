#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

typedef struct
{
    int account_number;
    char name[100];
    float balance;
} Account;

Account accounts[MAX_ACCOUNTS];
int num_accounts = 0;

void create_account()
{
    if (num_accounts >= MAX_ACCOUNTS)
    {
        printf("Max account limit reached!\n");
        return;
    }

    Account new_account;
    new_account.account_number = num_accounts + 1;

    printf("Enter your name: ");
    scanf("%s", new_account.name);

    new_account.balance = 0.0;
    accounts[num_accounts++] = new_account;

    printf("Account created! Your account number is %d\n", new_account.account_number);
}

void deposit(int account_number, float amount)
{
    if (account_number <= 0 || account_number > num_accounts)
    {
        printf("Invalid account number!\n");
        return;
    }

    accounts[account_number - 1].balance += amount;
    printf("Deposit successful! New balance: %.2f\n", accounts[account_number - 1].balance);
}

void withdraw(int account_number, float amount)
{
    if (account_number <= 0 || account_number > num_accounts)
    {
        printf("Invalid account number!\n");
        return;
    }

    if (accounts[account_number - 1].balance < amount)
    {
        printf("Insufficient balance!\n");
        return;
    }

    accounts[account_number - 1].balance -= amount;
    printf("Withdrawal successful! New balance: %.2f\n", accounts[account_number - 1].balance);
}

void check_balance(int account_number)
{
    if (account_number <= 0 || account_number > num_accounts)
    {
        printf("Invalid account number!\n");
        return;
    }

    printf("Account Balance: %.2f\n", accounts[account_number - 1].balance);
}

int main()
{
    int choice, account_number;
    float amount;

    printf("Welcome to Simple Banking System!\n");

    while (1)
    {
        printf("\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create_account();
            break;
        case 2:
            printf("Enter account number: ");
            scanf("%d", &account_number);
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            deposit(account_number, amount);
            break;
        case 3:
            printf("Enter account number: ");
            scanf("%d", &account_number);
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            withdraw(account_number, amount);
            break;
        case 4:
            printf("Enter account number: ");
            scanf("%d", &account_number);
            check_balance(account_number);
            break;
        case 5:
            printf("Thank you for using our banking system!\n");
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}
