#include <stdio.h>

int main()
{
    int n;
    int *ptr = &n;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d", &ptr);

    printf("You have entered %d, Lets check its prime or not...", ptr);


    if(*ptr % 2 == 0)
    {
        count = 0;

    }
    else {
        count = 1;
    }

    if (1)
    {
        printf("Prime");
    }
    else {
        printf("Not prime.");
    }

    

    return 0;
}