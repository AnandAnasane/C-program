#include <stdio.h>

int main()

{

    int a , b, choice;
    printf("This is a calculator \n");

    printf("Enter the value of A and B \n");
    scanf("%d%d", &a, &b);

    printf("\n 1 . Addition \n");
    printf("\n 2 . Substraction \n");
    printf("\n 3 . Multiplication \n");
    printf("\n 4 . Division \n");

    printf("\n Enter your choice of mathematical operation : \n");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("The Addition of %d + %d is %d \n ", a , b , a+b);
    }
    else if(choice == 2)
    {
        printf("The Substraction of %d - %d is %d \n ", a , b , a-b);
    }
    else if(choice == 3)
    {
        printf("The Multiplication of %d x %d is %d \n ", a , b , a*b);
    }
    else if(choice == 4)
    {
        printf("The Division of %d / %d is %d \n ", a , b , a/b);
    }
    else
    {
        printf("Please enter the valid option....! \n");
    }


return 0;
}