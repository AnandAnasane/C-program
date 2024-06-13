// WAP to print the employee information using structure with function

#include <stdio.h>
#include <string.h>
#define LINE printf("\n ---------------------------- \n");

typedef struct employee
{
    int id;
    char name[20];
    int age;
    char designation[20];

} employee;

// int n;
void outputData(employee[], int);
struct employee inputData(employee[], int);

int main()
{
    employee e1[];
    employee e = inputData(e1);
    outputData(e);
    return 0;
}

//  Function to Output data

void outputData(employee e[], int count)
{
    for (int i = 0; i < 2; i++)
    {
        LINE
        printf("\n ID: %d", e[i].id);
        printf("\n Name: %s", e[i].name);
        printf("\n Age: %d", e[i].age);
        printf("\n Designation: %s", e[i].designation);
        LINE
    }
}

//  Function to input data

struct employee inputData(employee e[])
{
    LINE

    for (int i = 0; i < 2; i++)
    {
        LINE
        printf(" \n Enter the Id of Employee: ");
        scanf("%d", &e[i].id);

        printf("\n Enter the name of Emoloyee:");
        scanf("%s", &e[i].name);

        printf("\n Enter the Age of Employee:");
        scanf("%d", &e[i].age);

        printf("\n Enter the Designation of Employee: ");
        scanf("%s", &e[i].designation);

        LINE
    }

        return 0;
}