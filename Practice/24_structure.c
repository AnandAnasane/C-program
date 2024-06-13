// WAP to store student data using structure..

#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[20];
    int age;
};

int main()
{
    struct student s;

    printf("Enter the Id ");
    scanf("%d", &s.id);
    printf("Enter the name ");
    scanf("%s", &s.name);
    printf("Enter the Age ");
    scanf("%d", &s.age);

    printf("The ID is %d \n", s.id);
    printf("The name is %s \n", s.name);
    printf("The age is: %d \n", s.age);

    return 0;
}