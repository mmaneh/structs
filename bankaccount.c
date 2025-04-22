#include <stdio.h>
typedef struct{
    int accountNumber;
    char holderName[50];
    float balance;
}BankAccount;
void deposit(BankAccount *account, float amount);
void withdraw(BankAccount * account, float amount);
void displayAccount(BankAccount account);

void withdraw(BankAccount * account, float amount){
    if(amount < account->balance) {
        account->balance -= amount;
        printf("Successed\n");
    }else{
        printf("pox chka\n");
    }
    return;
}



void deposit(BankAccount *account, float amount){
    
    account->balance += amount;
    printf("%f amount successfully added to your account:\n ");
    return;
}

void displayAccount(BankAccount account){
    printf("account number: %d\n", account.accountNumber);
    printf("holder name: %s\n", account.holderName);
    printf("account balance: %.2f\n", account.balance);
    return;
}


int main() {
    BankAccount account;
    printf("Enter you account number: ");
    scanf("%d", &account.accountNumber);

    printf("Enter your name: ");
    scanf("%s", account.holderName);

    account.balance = 350000.00;
    int num = 0;
    printf("Enter 1 to withdaw 2 for deposit\n");
    scanf("%d", &num);

    float amount = 0.00;
    if(num == 1){

        printf("The amount you want to withraw: ");
        scanf("%f", &amount);
        withdraw(&account,amount);
        displayAccount(account);
    }
    if(num == 2){
        printf("The amount you want to deposit");
        scanf("%f", &amount);
        deposit(&account, amount);
        displayAccount(account);
    }
    return 0;
}

