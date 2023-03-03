#include <stdio.h>

struct Employee {
    int eno;
    char ename[20];
    float salary;
};

int main() {
    int n, i, max_index;
    float max_salary = 0;
    
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    struct Employee emp[n];
    
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &emp[i].eno);
        printf("Employee name: ");
        scanf("%s", emp[i].ename);
        printf("Employee salary: ");
        scanf("%f", &emp[i].salary);
        
        if (emp[i].salary > max_salary) {
            max_salary = emp[i].salary;
            max_index = i;
        }
    }
    
    printf("\nDetails of employee with the highest salary:\n");
    printf("Employee number: %d\n", emp[max_index].eno);
    printf("Employee name: %s\n", emp[max_index].ename);
    printf("Employee salary: %0.2f\n", emp[max_index].salary);
    
    return 0;
}
