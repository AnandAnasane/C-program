#include<stdio.h>
// #include "CallByValue.c"
void swappingCallByReference(int *, int *);
int main()
{
    int a, b;

    printf("\n Enter the values of a and b \n");
    scanf("%d%d", &a, &b);

    // swappingCallByValue(a, b);

    printf("\n Inside main before swapping: a=%d, b=%d \n", a, b);

    swappingCallByReference(&a, &b);

    printf("\n Inside main after swapping: a=%d, b=%d \n", a, b);

    return 0;
} 

void swappingCallByReference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("\n Inside swappingCallByReference: a=%d, b=%d \n", *a, *b);
}