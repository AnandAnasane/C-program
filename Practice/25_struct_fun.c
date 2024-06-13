// WAP to print the employee information using structure with function

#include <stdio.h>
#include <string.h>
#define LINE printf("\n ---------------------------- \n");

typedef struct employee
{
    int id;
    char name[20];
    int DoB;
    int age;
    char designation[20];

} employee;

void outputData(employee );
struct employee inputData(employee );

int main()
{
    employee e1;
    employee e = inputData(e1);
    outputData(e);
    return 0;
}

//  Function to Output data

void outputData(employee e)
{
    LINE
    printf("\n ID: %d", e.id);
    printf("\n Name: %s", e.name);
    printf("\n DoB: %d", e.DoB);
    printf("\n Age: %d", e.age);
    printf("\n Designation: %s", e.designation);
    LINE
}

//  Function to input data

struct employee inputData(employee e)
{
    LINE

    printf(" \n Enter the Id of Employee: ");
    scanf("%d", &e.id);

    printf("\n Enter the name of Emoloyee:");
    scanf("%s", &e.name);

    printf("\n Enter the Date of Birth of Employee: ");
    scanf("%d", &e.DoB);

    printf("\n Enter the Age of Employee:");
    scanf("%d", &e.age);

    printf("\n Enter the Designation of Employee: ");
    scanf("%s", &e.designation);

    LINE 
    return e;
}