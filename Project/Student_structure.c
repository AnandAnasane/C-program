// WAP to insert students name and students marks using structure
//  Use array

#include <stdio.h>
#define LINE printf("\n ------------------------------------- \n");

typedef struct student
{
    int id;
    char name[20];
    int age;
    // Marks of students
    int math;
    int sci;
    int social;
    int eco;
    int his;
    int hindi;

} student;

int main()
{
    // Total marks is 600 with 100 each.

    int n;

    printf("Enter the number of student to add: ");
    scanf("%d", &n);
    student s[n];

    LINE

        printf("Total Student to add - %d", n);
    LINE

        for (int i = 0; i < n; i++)
    {
        printf("Enter the Student ID: ");
        scanf("%d", &s[i].id);

        printf("Enter the Student NAME: ");
        scanf("%s", &s[i].name);

        printf("Enter the Student AGE: ");
        scanf("%d", &s[i].age);

        printf("Enter the marks of Students: \n");

        printf("Mathematics: ");
        scanf("%d", &s[i].math);
        printf("Science: ");
        scanf("%d", &s[i].sci);
        printf("Social: ");
        scanf("%d", &s[i].social);
        printf("Economics: ");
        scanf("%d", &s[i].eco);
        printf("History: ");
        scanf("%d", &s[i].his);
        printf("Hindi: ");
        scanf("%d", &s[i].hindi);

        LINE
    }

    for (int i = 0; i < n; i++)
    {

        printf("ID: %d \n", s[i].id);
        printf("NAME: %s \n", s[i].name);
        printf("AGE: %d \n", s[i].age);
        printf("\n----Marks of student----\n");
        printf("Mathematics: %d \n", s[i].math);
        printf("Science: %d \n", s[i].sci);
        printf("Economics: %d \n", s[i].eco);
        printf("Social: %d \n", s[i].social);
        printf("History: %d \n", s[i].his);
        printf("Hindi: %d \n", s[i].hindi);
        printf("\n -------Final Marks-------\n ");

        int total;
        float avg;
        total = s[i].math + s[i].sci + s[i].social + s[i].eco + s[i].his + s[i].hindi;
        avg = (s[i].math + s[i].sci + s[i].social + s[i].eco + s[i].his + s[i].hindi) / 6.0;

        printf("Total Marks: %d \n", total);
        printf("Average : %f", avg);
        LINE 
        LINE
    }

    return 0;
}