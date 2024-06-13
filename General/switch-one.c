# include <stdio.h>

int main()
{
    int choice, a;
    float radi;
    
    printf("option 1. Area of Circle \n");
    printf("option 2. Positive or Negative \n");
    printf("option 3. Even or odd \n");

    printf("Enter your option : \n");
    scanf("%d", &choice);


    printf("Enter the value: \n");
    scanf("%d", &a);
    
    
    switch(choice)
    {
        case 1 :  printf("The area of circle is %f", 3.14*radi*radi);
                  break;

        case 2 :  if(a>0)
                    {
                        printf("Value is positive");
                    }
                    else
                    {
                        printf("Value is Negative");
                    }
                    break;
        case 3 : if (a % 2 == 0)
                    {
                        printf("Enter the value is Even number");
                    }
                    else 
                    {
                        printf("Entered value is odd number");
                    }
                    break;

        default: printf("Invalid Option ..... !");
    }

    return 0;

}