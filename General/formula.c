#include <stdio.h>

int main()
{

    int  choice, a, b, side, l;
    float radi;

    // a and b for even or odd
    // radi for radius of circle == area of circle = 22/7*radi*radi
    // side for  square  area of square = side*side
    // area of rectangle = l*b
    
    printf("1. Area of Circle \n");
    printf("2. Area of Square \n");
    printf("3. Area of Rectangle \n");
    printf("4. Even or odd \n");

    printf("Enter your choice : \n");
    scanf("%d", &choice);

    // Area of circle
    if(choice == 1)
    {
        printf("Enter the Radius of Circle: \n");
        scanf("%f", &radi);

        printf("The area of circle is %f", 3.14*radi*radi);
    }
    
    // Area of Square
    else if(choice == 2)
    {
        printf("Enter the Sides of Square: \n");
        scanf("%d", &side);

        printf("The area of Square is %d", side*side);
    }
    
    // Area of rectangle
    else if(choice == 3)
    {
        printf("Enter the length and Breadth of Rectangle: \n");
        scanf("%d%d", &l, &b);

        printf("The area of Rectangle is %d", l*b);
    }
    
    // Evan or Odd
    else if(choice == 4)
    {
        printf("Enter the Value: \n");
        scanf("%d", &b);

        if(b % 2 ==0)
        {
            printf("Entered value %d is Even", b);
        }
        else
        {
            printf("Entered Value %d is Odd", b);

        }
        
    }
    
    else 
    {
        printf("Invalid option......!");
    }

    return 0;
}