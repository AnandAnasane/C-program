// In this method, In order to reflect the changes from user defined function to the main, 
// we need to pass variable by address and we can handle that address using pointer  only.
// BEcause of the Pointer the changes will directly reflected top the main function variables 
// which is known as call by Reference.

#include <stdio.h>
void swappingCallByReference(int *, int *);
int main()
{

    printf("\n -------------------------------------------- \n");
    int a, b;
    printf("\n enter a and b : = ");
    scanf("%d%d", &a, &b);

    printf("\n -------------------------------------------- \n");
    printf("\n inside main() before swapping a = %d , b = %d ", a, b);
    swappingCallByReference(&a, &b);
    printf("\n inside main() after swapaping a = %d , b = %d ", a, b);

    printf("\n -------------------------------------------- \n");
    return 0;
}
// call by value
void swappingCallByReference(int *a, int *b) // int *a = &a , int *b = &b
{

    printf("\n -------------------------------------------- \n");
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\n inside swappingCallByReference() a = %d , b = %d ", *a, *b);

    printf("\n -------------------------------------------- \n");
}