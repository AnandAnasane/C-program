//  WAP to print the array of structure..

#include <stdio.h>
#include <string.h>
#define LINE printf("\n ------------------------\n");

typedef struct student
{
    int id;
    int name [20];
    int age;
}student;

int main()
{
    student s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the Id: ");
        scanf("%d", &s[i].id);
        printf("Enter the name: ");
        scanf("%s", &s[i].name);
        printf("Enter the age: ");
        scanf("%d", &s[i].age);

        LINE
    }

    for (int i = 0; i < 3; i++)
    {
        printf("The Id is: %d \n", s[i].id);
        printf("The name is %s: \n", s[i].name);
        printf("The age: is %d \n", s[i].age);
        LINE
    }

    return 0;
}
