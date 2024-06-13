#include <stdio.h>
#include <string.h>
#define LINE printf("\n--------------------------------------------------------\n");
struct student
{
    int StudentID;
    char StudentName[20];
    int Class;
};
struct Marks
{
    int Maths;
    int English;
    int Marathi;
    int Science;
    int Socialstudies;
    int Geographic;
};
int main()
{
    int n, a, sum = 0;
    float avg;
    printf("Enter the size = ");
    scanf("%d", &n);

    struct student s1[n];
    struct Marks m1[n];

    for (int i = 0; i < n; i++)
    {
        LINE
            printf("Enter the Student id = ");
        scanf("%d", &s1[i].StudentID);
        printf("Enter the Student Name = ");
        scanf("%s", &s1[i].StudentName);
        printf("Enter the Student Class = ");
        scanf("%d", &s1[i].Class);
        printf("Enter marks of Maths = ");
        scanf("%d", &m1[i].Maths);
        printf("Enter marks of English = ");
        scanf("%d", &m1[i].English);
        printf("Enter marks of Marathi = ");
        scanf("%d", &m1[i].Marathi);
        printf("Enter marks of Science = ");
        scanf("%d", &m1[i].Science);
        printf("Enter marks of Social Studies = ");
        scanf("%d", &m1[i].Socialstudies);
        printf("Enter marks of Geaographic = ");
        scanf("%d", &m1[i].Geographic);

        LINE
    }

    for (int i = 0; i < n; i++)

    {
        LINE
            printf("\nStudent id = %d", s1[i].StudentID);
        printf("\nStudent Name  = %s", s1[i].StudentName);
        printf("\nStudent Class = %d", s1[i].Class);
        printf("\n Maths = %d", m1[i].Maths);
        printf("\n Marathi = %d", m1[i].Marathi);
        printf("\n Science = %d", m1[i].Science);
        printf("\n Social Studies = %d", m1[i].Socialstudies);
        printf("\n Geographic = %d", m1[i].Geographic);
        LINE
    }

    for (int i = 0; i < 1; i++)

    {
        sum += m1[i].Maths + m1[i].Marathi + m1[i].Science + m1[i].Socialstudies + m1[i].Geographic + m1[i].English;
    }
    LINE
        printf(" The Total Marks is %d", sum);
    LINE
        avg = sum / (n * 6);
    LINE
        printf("The Average percentage is %f", avg);
    LINE return 0;
}