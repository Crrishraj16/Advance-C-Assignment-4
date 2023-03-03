#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef union {
    int roll_no;
    char stud_name[30];
    int mark1;
    int mark2;
    int mark3;
    int total_marks;
    float avg_marks;
} student;

int main() {
    student students[MAX_STUDENTS];
    int num_students, i, j;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (i = 0; i < num_students; i++) {
        printf("Enter the details of student %d:\n", i+1);
        printf("Roll no.: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].stud_name);
        printf("Marks in subject 1: ");
        scanf("%d", &students[i].mark1);
        printf("Marks in subject 2: ");
        scanf("%d", &students[i].mark2);
        printf("Marks in subject 3: ");
        scanf("%d", &students[i].mark3);

        students[i].total_marks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        students[i].avg_marks = (float) students[i].total_marks / 3;
    }

    // Arrange the records in descending order of marks
    for (i = 0; i < num_students - 1; i++) {
        for (j = i + 1; j < num_students; j++) {
            if (students[j].total_marks > students[i].total_marks) {
                student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\nStudent Records:\n");
    printf("Roll No.  Name                       Marks  Total   Average\n");
    printf("-----------------------------------------------------------\n");
    for (i = 0; i < num_students; i++) {
        printf("%-8d %-26s %3d %3d %3d %8d %8.2f\n", students[i].roll_no, students[i].stud_name,
            students[i].mark1, students[i].mark2, students[i].mark3, students[i].total_marks, students[i].avg_marks);
    }

    return 0;
}
