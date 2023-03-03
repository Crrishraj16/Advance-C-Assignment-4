#include<stdio.h>

struct Marks{
    int rollno;
    char name[50];
    float chem_marks, maths_marks, phy_marks;
};

int main(){

    struct Marks student[5];
    int i;

    for(i=0;i<5;i++){

        printf("Enter details of student %d:\n", i+1);

        printf("Roll no.: ");
        scanf("%d",&student[i].rollno);

        printf("Name: ");
        scanf("%s",student[i].name);

        printf("Chemistry Marks: ");
        scanf("%f",&student[i].chem_marks);

        printf("Mathematics Marks: ");
        scanf("%f",&student[i].maths_marks);

        printf("Physics Marks: ");
        scanf("%f",&student[i].phy_marks);

        printf("\n");

    }

    printf("Details of all students:\n");

    for(i=0;i<5;i++){

        printf("Roll no.: %d\n", student[i].rollno);
        printf("Name: %s\n", student[i].name);

        float total_marks = student[i].chem_marks + student[i].maths_marks + student[i].phy_marks;
        float percentage = (total_marks/300)*100;

        printf("Percentage: %.2f\n", percentage);
        printf("\n");

    }

    return 0;

}
