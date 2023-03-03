#include <stdio.h>

struct Customer {
    int account_no;
    char name[20];
    float balance;
};

void printCustomers(struct Customer customers[], int n) {
    printf("Customers with balance less than 100 Rs:\n");
    for (int i = 0; i < n; i++) {
        if (customers[i].balance < 100.0) {
            printf("Account no.: %d, Name: %s\n", customers[i].account_no, customers[i].name);
        }
    }
}

int main() {
    struct Customer customers[3];
    int n = 3;

    // Accept customer details
    for (int i = 0; i < n; i++) {
        printf("Enter details for customer %d:\n", i+1);
        printf("Account no.: ");
        scanf("%d", &customers[i].account_no);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    // Print customers with balance less than 100 Rs
    printCustomers(customers, n);

    return 0;
}
