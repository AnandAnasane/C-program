#include <stdio.h>
#include <string.h>

#define LINE printf("\n ---------------------------- \n");
#define MAX_EMPLOYEES 2

typedef struct employee {
    int id;
    char name[20];
    int age;
    char designation[20];
} employee;

void outputData(employee[], int);
void inputData(employee[], int);

int main() {
    employee employees[MAX_EMPLOYEES];
    inputData(employees, MAX_EMPLOYEES);
    outputData(employees, MAX_EMPLOYEES);
    return 0;
}

// Function to output data
void outputData(employee e[], int count) {
    for (int i = 0; i < count; i++) {
        LINE
        printf("\n ID: %d", e[i].id);
        printf("\n Name: %s", e[i].name);
        printf("\n Age: %d", e[i].age);
        printf("\n Designation: %s", e[i].designation);
        LINE
    }
}

// Function to input data
void inputData(employee e[], int count) {
    for (int i = 0; i < count; i++) {
        LINE
        printf(" \n Enter the Id of Employee %d: ", i + 1);
        scanf("%d", &e[i].id);

        printf("\n Enter the name of Employee %d: ", i + 1);
        scanf("%s", e[i].name);

        printf("\n Enter the Age of Employee %d: ", i + 1);
        scanf("%d", &e[i].age);

        printf("\n Enter the Designation of Employee %d: ", i + 1);
        scanf("%s", e[i].designation);
        LINE
    }
}
