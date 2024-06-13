#include <stdio.h>
#define LINE printf("\n --------------------------------- \n");
int main()
{

    printf("\n -------------------------- the ASCII values ---------------------- \n ");
    for (int i = 0; i < 128; i++)
    {
        printf("%d = %c\t", i, i);
    }
    
    return 0;
}