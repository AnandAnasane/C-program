# include <stdio.h>

int main()
{
    //  For integer
    int a = 100;

    int *ptr;
    ptr = &a;

    printf("Address of  a is %p \n", ptr);

    printf("Value of a is %d \n", *ptr);

    // printf("ENter the value: ");
    // scanf("%d",ptr);

    // printf ("value is %d  \n", *ptr);
    // printf("Address is %d \n", ptr);
    return 0;

}