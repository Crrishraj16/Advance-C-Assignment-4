#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll_no;
    char stud_name[50];
    int class;
};

void display(struct student s);

int main() {
    struct student s1;
    
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter student name: ");
    scanf("%s", s1.stud_name);
    printf("Enter class: ");
    scanf("%d", &s1.class);
    
    display(s1);
    
    return 0;
}

void display(struct student s) {
    printf("Roll number: %d\n", s.roll_no);
    printf("Student name: %s\n", s.stud_name);
    printf("Class: %d\n", s.class);
}
