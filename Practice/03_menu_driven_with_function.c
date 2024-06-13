#include <stdio.h>
#define LINE printf("\n ------------------------------------------- \n");

void areaOfCircle();
void areaOfRectangle();
void areaOftriangle();
void oddEven();

float pi = 3.14;

int main()
{
    int choice;

    do
    {
        LINE

        printf("\n1 : Area of Circle \n");
        printf("2 : Area of Rectangle \n");
        printf("3 : Area of triangle \n");
        printf("4 : Odd or Even \n");

        LINE

        printf(" \n enter your choice \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            areaOfCircle();
            break;
        case 2:
            areaOfRectangle();
            break;
        case 3:
            areaOftriangle();
            break;
        case 4:
            oddEven();
            break;

        default:
            printf("Invalid Response.....!!!");
        }
    } while (choice != 0);
    printf("End of main....!!!!");

    return 0;
}

void areaOfCircle()
{
    float radi;
    printf("Enter the Radius of circle: ");
    scanf("%f", &radi);

    printf("Area of Circle is %f", pi * (radi * radi));

    LINE
}
void areaOfRectangle()
{
    float length, breadth;

    printf("Enter the length and Breadth: ");
    scanf("%f %f", &length, &breadth);

    printf("The area of Rectangle is %f", length * breadth);

    LINE
}
void areaOftriangle()
{
    float base, height;

    printf("Enter the base and height: ");
    scanf("%f %f", &base, &height);

    printf("The area of Triangle is %f", 0.5 * (base * height));

    LINE
}
void oddEven()
{
    int a;
    printf("Enter any number ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is even number", a);
    }
    else
    {
        printf("%d is odd number", a);
    }

    LINE
}