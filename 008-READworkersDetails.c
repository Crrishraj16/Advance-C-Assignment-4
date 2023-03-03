#include <stdio.h>

struct Worker {
    char name[50];
    float hours_worked;
    float hourly_rate;
};

int main() {
    struct Worker w1, w2;
    float total_payment;

    // Read details of worker 1
    printf("Enter details of worker 1:\n");
    printf("Name: ");
    fgets(w1.name, 50, stdin);
    printf("Hours worked: ");
    scanf("%f", &w1.hours_worked);
    printf("Hourly rate: ");
    scanf("%f", &w1.hourly_rate);
    getchar(); // to consume the newline character left by scanf

    // Read details of worker 2
    printf("\nEnter details of worker 2:\n");
    printf("Name: ");
    fgets(w2.name, 50, stdin);
    printf("Hours worked: ");
    scanf("%f", &w2.hours_worked);
    printf("Hourly rate: ");
    scanf("%f", &w2.hourly_rate);
    getchar(); // to consume the newline character left by scanf

    // Calculate total payment
    total_payment = (w1.hours_worked * w1.hourly_rate) + (w2.hours_worked * w2.hourly_rate);

    // Display details and total payment
    printf("\nWorker 1 details:\n");
    printf("Name: %s", w1.name);
    printf("Hours worked: %.2f\n", w1.hours_worked);
    printf("Hourly rate: %.2f\n", w1.hourly_rate);
    printf("\nWorker 2 details:\n");
    printf("Name: %s", w2.name);
    printf("Hours worked: %.2f\n", w2.hours_worked);
    printf("Hourly rate: %.2f\n", w2.hourly_rate);
    printf("\nTotal payment: %.2f\n", total_payment);

    return 0;
}
