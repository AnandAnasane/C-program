//  WAP to print the array of structure..

#include <stdio.h>
#include <string.h>
#define LINE printf("\n ------------------------\n");

typedef struct employee
{
    int id;
    char name [20];
    int age;

}employee;

int main()
{
    employee e[10];
    int n;

    printf("Enter the number of Employee: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the Employee Id: ");
        scanf("%d", &e[i].id);

        printf("Enter the name of Employee: ");
        scanf("%s", &e[i].name);

        printf("Enter the age of Employee: ");
        scanf("%d", &e[i].age);

        LINE
    }

    for (int i = 0; i < n; i++)
    {
        printf("ID:  %d \n", e[i].id);
        printf("NAME: %s \n", e[i].name);
        printf("Age:  %d \n", e[i].age);
        LINE
    }

    return 0;
}
