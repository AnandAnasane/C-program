#include <stdio.h>
int main()


// Even or Odd Number 


{
    int a;
    char z;
    z = 's';

    printf("Enter the value :\n");

    scanf("%d", &a);


    if (a % 2 == 0)
    {
        printf("The A is an Even number");
    }
    else 
    {
        printf("The A is an Odd number");
    }
    printf("\n%c",z);


    return 0;
}