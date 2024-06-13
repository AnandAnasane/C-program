#include <stdio.h>
#include<string.h>
#define LINE printf("\n ---------------- \n");

union student{
    int id;
    char name[20];
    int age;
};

int main()
{
    union student s;
    printf("Memory of union is %d", sizeof(s));

    LINE

    s.age = 20;
    strcpy(s.name, "anand");
    s.id = 65;
    printf("age is %d \n", &s.age);
    printf("name is %s \n ", &s.name);
    printf("id is %d \n ", &s.id);


    return 0;
}