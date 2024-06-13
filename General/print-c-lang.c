#include <stdio.h>
int main()

{
    int a ;

    printf("Enter the value: ");
    scanf("%d", &a);

    if (a%3 ==0 && a%5 == 0 )
    {
        printf("C Language \n");
    }
    else if(a % 5 == 0)
    {
        printf("C \n");
    }
    else if(a % 3 == 0)
    {
        printf("Language");
    }
    else 
    {
        printf("Not divisible by 3 and 5");
    }
    return 0;
}