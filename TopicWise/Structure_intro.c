#include <stdio.h>
#include <string.h>
// introduction to structure
struct Student
{
    int id;
    char name[20];
    int age;
}; // structure of student
int main()
{
    // variable of the structure
    struct Student s1    //= {102 , "ram" , 25}; // s1 is the varible of the student structure

    // s1.id = 101;
    // strcpy(s1.name,"ABCD");
    // s1.age = 23 ;

    printf("\n enter the id : = ");
    scanf("%d", &s1.id);
    printf("\n enter the name : = ");
    scanf("%s", &s1.name);
    printf("\n enter the age : = ");
    scanf("%d", &s1.age);

    printf("\n id = %d ", s1.id);
    printf("\n name = %s ", s1.name);
    printf("\n age = %d ", s1.age);

    return 0;
}